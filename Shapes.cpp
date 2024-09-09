
#include <windows.h>
#include <GL/gl.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
//#include <stdio.h>



void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0);
    //glPointSize(4.0);
    glLineWidth(1);
    glBegin(GL_LINES);

    glVertex2i(250, 0);
    glVertex2i(250, 500);

    glVertex2i(0,250);
    glVertex2i(500, 250);


    /*glVertex2i(10, 10);
    glVertex2i(110, 10);
    glVertex2i(10, 10);
    glVertex2i(10, 110);
    glVertex2i(110, 10);
    glVertex2i(110, 110);
    glVertex2i(10, 110);
    glVertex2i(110, 110);*/

    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glVertex2i(75, 75);
    glVertex2i(175, 75);
    glVertex2i(175, 175);
    glVertex2i(75, 175);

    glEnd();
    glFlush();
}

void myInit (void){
    glClearColor(0.5, 0.5, 0.5, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    //glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (400, 100);
    glutCreateWindow ("my first attempt");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
}
