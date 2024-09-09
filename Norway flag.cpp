#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

void display() {
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(0.729f, 0.047f, 0.184f); //Norwegian red
    glVertex2i(0, 0);    // x, y
	glVertex2i(880, 0);    // x, y
    glVertex2i(880, 640);    // x, y
	glVertex2i(0, 640);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //White stripe horizontal
    glVertex2i(0, 240);    // x, y
	glVertex2i(880, 240);    // x, y
    glVertex2i(880, 400);    // x, y
	glVertex2i(0, 400);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); //White stripe vertical
    glVertex2i(240, 0);    // x, y
	glVertex2i(400, 0);    // x, y
    glVertex2i(400, 640);    // x, y
	glVertex2i(240, 640);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.12549f, 0.35686f); //Blue stripe horizontal
    glVertex2i(0, 280);    // x, y
	glVertex2i(880, 280);    // x, y
    glVertex2i(880, 360);    // x, y
	glVertex2i(0, 360);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.12549f, 0.35686f); //Blue stripe vertical
    glVertex2i(280, 0);    // x, y
	glVertex2i(360, 0);    // x, y
    glVertex2i(360, 640);    // x, y
	glVertex2i(280, 640);
	glEnd();

	glFlush();  // Render now
}

void myInit (void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 880.0, 0.0, 640.0);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(880, 640);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("Flag of Norway"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	myInit ();
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
