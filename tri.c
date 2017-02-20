#include<GL/glut.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.4,0.0);
glBegin(GL_LINE_LOOP);
glVertex2i(10,10);
glVertex2i(100,10);
glVertex2i(50,100);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(20,45);
glVertex2i(70,45);
glVertex2i(45,10);
glEnd();
glFlush();
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(10,20);
glutInitWindowSize(800,800);
glutCreateWindow("sample");
glClearColor(1.0,1.0,.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,500,0,500);
glutDisplayFunc(display);
glutMainLoop();
return 0;}
