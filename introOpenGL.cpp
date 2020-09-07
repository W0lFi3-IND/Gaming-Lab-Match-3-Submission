#include<GL/glut.h>
void myinit(void)
{
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D (0.0,640.0,0.0,480.0);
 }
 
 void lineSegment(void)
 {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.1,0.1,0.1);
glLineWidth(1);



glBegin (GL_LINES);

glVertex2i(320,240 );
	  glVertex2i(320,440);
// line 2
 glVertex2i(440,320 );
	  glVertex2i(200,320);
// line 3
	  glVertex2i(440,240 );
	  glVertex2i( 200,400);
// line 4
	 
	
	  	  
	  
	  
	  
	  
glEnd ( );
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(640,480);
glutCreateWindow("More on Open Gl Line Function");
myinit();
glutDisplayFunc(lineSegment);
glutMainLoop();
}

