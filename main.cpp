#include <GL/glut.h>

void initWindow() {
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(200, 200);
    glutInitWindowSize(400, 300);
    glutCreateWindow("Computer Graphic Practise");

    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void displayCb() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.4, 0.2);

    glBegin(GL_LINES);
        glVertex2i(180, 15);
        glVertex2i(10, 145);
    glEnd();

    glFlush();
}

int main(int argc, char* argv[]) {

    glutInit(&argc, argv);

    initWindow();

    glutDisplayFunc(displayCb);

    glutMainLoop();

    return 0;
}
