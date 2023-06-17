#include<stdio.h>
#include<windows.h>
#include<GL/glut.h>

GLfloat a=0,b=0,c=0,d=0,e=0;

void runway();
void update(int value)
{
	a+=15.0;	///Vertical Height of X axis (i)
	b-=10.0;	///Runway Movement
	c=150;	   ///take off angle on y axis

	if(b<=-80.0)
		b=0.0;
	glutPostRedisplay();
	glutTimerFunc(200,update,0);//delay
}


void Plane_Body(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    



    ///--------BODY OF THE PLANE----------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.750,0.750,0.750);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(15.0,30.0);
        glVertex2f(0.0,55.0);
        glVertex2f(135.0,55.0);
        glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();
    ///--------COCKPIT OF THE PLANE----------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//upper triangle construction plane
        glVertex2f(135.0,55.0);
        glVertex2f(150.0,50.0);
        glVertex2f(155.0,45.0);
        glVertex2f(160.0,40.0);
        glVertex2f(135.0,40.0);
    glEnd();
    glPopMatrix();
    ///--------COCKPIT OUTLINE DIVIDER----------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(135.0,55.0);
        glVertex2f(150.0,50.0);
        glVertex2f(155.0,45.0);
        glVertex2f(160.0,40.0);
        glVertex2f(135.0,40.0);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.750,0.750,0.750);
    glBegin(GL_POLYGON);//lower triangle
        glVertex2f(135.0,40.0);
        glVertex2f(160.0,40.0);
        glVertex2f(160.0,37.0);
        glVertex2f(145.0,30.0);
        glVertex2f(135.0,30.0);
    glEnd();
    glPopMatrix();

    ///---------TAIL-------------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(.33,.46,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.0,55.0);
        glVertex2f(0.0,80.0);
        glVertex2f(10.0,80.0);
        glVertex2f(40.0,55.0);
    glEnd();
    glPopMatrix();

    ///---------LEFT WING-------------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(65.0,55.0);
        glVertex2f(50.0,70.0);
        glVertex2f(75.0,70.0);
        glVertex2f(90.0,55.0);
    glEnd();
    glPopMatrix();
    ///---------RIGHT WING-------------
    glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
        glVertex2f(70.0,40.0);
        glVertex2f(100.0,40.0);
        glVertex2f(80.0,15.0);
        glVertex2f(50.0,15.0);
    glEnd();

    glPopMatrix();
    	///-----------------WINDOW1---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(20.0,45.0);
        glVertex2f(20.0,50.0);
        glVertex2f(30.0,50.0);
        glVertex2f(30.0,45.0);
    glEnd();
    glPopMatrix();
    
      	///-----------------WINDOW2---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(40.0,45.0);
        glVertex2f(40.0,50.0);
        glVertex2f(50.0,50.0);
        glVertex2f(50.0,45.0);
    glEnd();
    glPopMatrix();
      	///-----------------WINDOW3---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(60.0,45.0);
        glVertex2f(60.0,50.0);
        glVertex2f(70.0,50.0);
        glVertex2f(70.0,45.0);
    glEnd();
    glPopMatrix();
      	///-----------------WINDOW4---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(80.0,45.0);
        glVertex2f(80.0,50.0);
        glVertex2f(90.0,50.0);
        glVertex2f(90.0,45.0);
    glEnd();
    glPopMatrix(); 
      	///-----------------WINDOW5---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(100.0,45.0);
        glVertex2f(100.0,50.0);
        glVertex2f(110.0,50.0);
        glVertex2f(110.0,45.0);
    glEnd();
    glPopMatrix();
      	///-----------------WINDOW6---------
	 glPushMatrix();
    glTranslated(a,c,0.0);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);//rectangular body
        glVertex2f(120.0,45.0);
        glVertex2f(120.0,50.0);
        glVertex2f(130.0,50.0);
        glVertex2f(130.0,45.0);
    glEnd();
    glPopMatrix();
    
    
    
    
    
    
    glFlush();
    glutSwapBuffers();
}






void myinit()
{
    glClearColor(0.0f,1.0f,1.0f,0.0f);
    glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,500.0,0.0,500.0);
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1400.0,680.0);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Takeoff of an Airplane");
    glutDisplayFunc(Plane_Body);
    myinit();
    glutTimerFunc(100,update,0);
    glutMainLoop();
    return 0;
}
