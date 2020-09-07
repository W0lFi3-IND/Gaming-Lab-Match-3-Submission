#include<GL/glut.h>
#include<bits/stdc++.h>

void myinit(void)
{
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D (0.0,640.0,0.0,480.0);
 }
 void handleResize(int w,int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluPerspective(45.0,(double)w/(double)h,1.0,200.0);
}

 void lineSegment(void)
 {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.1,0.1,0.1);
glLineWidth(1);

for(int i =0; i<3;i++)
{ 
glBegin(GL_TRIANGLES);
int r = 0, g=0,b=0;
if(i==0)
{
	r=1;
	r=0;
	b=0;
}
else if(i==1)
{g=1;
 r=0;
 b=0;
}
else if(i==2){
	g=0;
 r=0;
 b=1;
}
    glColor3f( r,g,b ); // color code
    glVertex2f( rand() % 300 +0,rand() % 300 + 0 );
    glVertex2f( rand() % 300 +0, rand() % 300 + 0  );
	glVertex2f( rand() % 300 +0,rand() % 300 + 0 );
    glEnd(); 
glFlush();

	
}
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(50,100);
glutInitWindowSize(640,480);
glutCreateWindow("Yashovardhan Submission MadAngles");
myinit();
glutDisplayFunc(lineSegment);

glutMainLoop();
}

