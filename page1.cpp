#include <GL/glut.h>
#include <string.h>
float x;

void timer(int v)
{
	if(x>1)
		x=-x;
	x+=0.008;
	glutPostRedisplay();
	glutTimerFunc(100,timer,0);
}

void display()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set the background color to black
   glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer
   glPushMatrix();
   glBegin(GL_QUADS);
   glColor3f(0.0f+x, 0.0f, 0.0f); // Set the color to black for the top-left corner
   glVertex2f(-1.0f, 1.0f);
   glColor3f(0.0f, 0.0f, 0.5f-x); // Set the color to dark blue for the top-right corner
   glVertex2f(1.0f, 1.0f);
   glColor3f(0.0f, x, x); // Set the color to dark green for the bottom-right corner
   glVertex2f(1.0f, -1.0f);
   glColor3f(0.5f-x, 0.0f, 0.0f+x); // Set the color to dark red for the bottom-left corner
   glVertex2f(-1.0f, -1.0f);
   glEnd();
   glPopMatrix();

   // Add text to the center of the window
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.72f, 0.9f);  // Set the text position
   char *text = "Mangalore Institute of Technology and Engineering"; // Define the text string
   int len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.42f, 0.8f);  // Set the text position
   text = "Department of Computer Science and Engineering"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.25f, 0.0f);  // Set the text position
   text = "9/11 Tragedy"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.96f, -0.5f);  // Set the text position
   text = "MUHAMMED AFNAN HANIF"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_9_BY_15, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.96f, -0.56f);  // Set the text position
   text = "4MT20CS104"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(0.45f, -0.5f);  // Set the text position
   text = "HENCY JOSTAN DSOUZA"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_9_BY_15, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(0.73f, -0.56f);  // Set the text position
   text = "4MT20CS074"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.3f, -0.88f);  // Set the text position
   text = "UNDER THE GUIDANCE OF"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_8_BY_13, text[i]); // Draw each character of the text
   }
   
   glColor3f(1.0f, 1.0f, 1.0f); // Set the text color to white
   glRasterPos2f(-0.2f, -0.96f);  // Set the text position
   text = "Ms. Sunitha"; // Define the text string
   len = strlen(text);      // Get the length of the text string
   for (int i = 0; i < len; i++)
   {
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]); 
   }
   
   glFlush(); 
}

int main(int argc, char **argv)
{
   glutInit(&argc, argv); // Initialize GLUT
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(700, 500);
   glutInitWindowPosition(0, 0);
   glutCreateWindow("OpenGL Mini Project");
   timer(0);
   glutDisplayFunc(display);            
   glutMainLoop();     

   return 0;
}
