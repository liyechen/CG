#include <GL/glut.h>

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

#define a(x, y) x + y

void displayCb() {
    std::cout << "display cb" << std::endl;
}

int main(int argc, char* argv[]) {


    std::cout << 63 + ""<< std::endl;

//    glutInit(&argc, argv);
//
//    glutCreateWindow("Computer Graphic Practise");
//    glutInitWindowPosition(50, 100);
//    glutInitWindowSize(300, 300);
//    glutInitDisplayMode(GLUT_RGB);
//
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glutDisplayFunc(displayCb);
//
//    glutMainLoop();

    return 0;
}
