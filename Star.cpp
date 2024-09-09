#include <windows.h>  // for MS Windows
#include <GL/gl.h>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	//glLineWidth(2);
	//glBegin(GL_LINES);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f); //white star
	glVertex2i(150, 170);
    glVertex2i(115, 50);
    glVertex2i(200, 123);
	glVertex2i(285, 50);
	glVertex2i(250, 170);
    glVertex2i(340, 240);
    glVertex2i(236, 240);
    glVertex2i(200, 350);
    glVertex2i(164, 240);
	glVertex2i(60, 240);
	glEnd();

	glFlush();  // Render now
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(400, 400);   // Set the window's initial width & height
	glutInitWindowPosition(500, 200);  // Set the window's initial position according to the monitor
	glutCreateWindow("Twinkle Twinkle Little Star!"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
