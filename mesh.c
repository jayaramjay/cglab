#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#define dx 10
#define dy 10
GLfloat r=0.0,g=0.0,b=0.0,x=0,y=0,z=0;
void display()
{
GLint i,j;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(r,g,b);
for(i=10;i<300;i+=dx)
for(j=10;j<300;j+=dx)
{
glBegin(GL_LINE_LOOP);
glVertex2i(i,j);
glVertex2i(i+dx,j);
glVertex2i(i+dx,j+dy);
glVertex2i(i,j+dy);
glEnd();
}
glFlush();
}

int main(int argc,char **argv)
{
printf("enter r g b\n");
scanf("%f%f%f",&r,&g,&b);
printf("enter a b c\n");
scanf("%f%f%f",&x,&y,&z);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(10,20);
glutInitWindowSize(800,800);
glutCreateWindow("sample");
glClearColor(x,y,z,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,5,0,50);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
