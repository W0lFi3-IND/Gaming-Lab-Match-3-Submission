#include<GL/glut.h>
void myinit(void)
{
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D (0.0,640.0,0.0,480.0);
 }
 	
void plusline()
 {  glBegin(GL_LINES);
 	glVertex2f(0.38f, 0.15f);
 	glVertex2f(-0.38f, 0.15f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.0f, 0.75f);
 	glVertex2f(0.0f, -0.55f);
 	glEnd();
 }
 void diagonalline()
 {	glBegin(GL_LINES);
 	glVertex2f(0.38f, 0.55f);
 	glVertex2f(-0.38f, -0.25f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(-0.38f, 0.55f);
 	glVertex2f(0.38f, -0.25f);
 	glEnd();
 }
 
 void web1()
 {
 	glBegin(GL_LINES);
 	glVertex2f(0.05f, 0.55f); 
 	glVertex2f(-0.35f, 0.35f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.05f, 0.55f);
 	glVertex2f(0.35f, 0.35f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.35f, 0.05f);
 	glVertex2f(0.35f, 0.35f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(-0.35f, 0.05f);
 	glVertex2f(-0.35f, 0.35f);
 	glEnd();
	glFlush();
	glBegin(GL_LINES);
 	glVertex2f(-0.35f, 0.05f);
 	glVertex2f(-0.05f, -0.25f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.35f, 0.05f);
 	glVertex2f(-0.05f, -0.25f);
 	glEnd();
 }
 void web2()
 {
 		glBegin(GL_LINES);
 	glVertex2f(0.001f, 0.35f); 
 	glVertex2f(-0.15f, 0.30f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.001f, 0.35f);
 	glVertex2f(0.15f, 0.30f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.15f, 0.12f);
 	glVertex2f(0.15f, 0.30f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(-0.15f, 0.12f);
 	glVertex2f(-0.15f, 0.30f);
 	glEnd();
	glFlush();
	glBegin(GL_LINES);
 	glVertex2f(-0.15f, 0.12f);
 	glVertex2f(-0.05f, -0.01f);
 	glEnd();
 	glBegin(GL_LINES);
 	glVertex2f(0.15f, 0.12f);
 	glVertex2f(-0.05f, -0.01f);
 	glEnd(); 	
	
 }
 void lineSegment(void)
 {
glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glLineWidth(2.5);  
	glColor3f(0, 0, 0);
	plusline();
	diagonalline();
	web1();
	web2();
	glFlush();	
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(640,480);
glutCreateWindow("YASHOVARDHAN SPIDERWEB");
myinit();
glutDisplayFunc(lineSegment);
glutMainLoop();
}
