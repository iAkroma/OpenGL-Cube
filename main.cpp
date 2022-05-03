#include <GL/glut.h>
 
void Cube(){
    glClear(GL_COLOR_BUFFER_BIT);
 
    glRotatef(2, 2, 2, 1);
 
    glBegin(GL_LINES);
 
    glVertex3f(-50, -50, -50);
    glVertex3f(50, -50, -50);
    glVertex3f(50, -50, -50);
    glVertex3f(50, 50, -50);
    glVertex3f(50, 50, -50);
    glVertex3f(-50, 50, -50);
    glVertex3f(-50, 50, -50);
    glVertex3f(-50, -50, -50);
 
    glVertex3f(-50, -50, 50);
    glVertex3f(50, -50, 50);
    glVertex3f(50, -50, 50);
    glVertex3f(50, 50, 50);
    glVertex3f(50, 50, 50);
    glVertex3f(-50, 50, 50);
    glVertex3f(-50, 50, 50);
    glVertex3f(-50, -50, 50);
 
    glVertex3f(-50, -50, -50);
    glVertex3f(-50, -50, 50);
    glVertex3f(-50, 50, -50);
    glVertex3f(-50, 50, 50);
 
    glVertex3f(50, -50, -50);
    glVertex3f(50, -50, 50);
    glVertex3f(50, 50, -50);
    glVertex3f(50, 50, 50);
 
    glEnd();
 
    glutSwapBuffers();
}
 
void RenderWithTime(int = 0){
    Cube();
    glutTimerFunc(20, RenderWithTime, 0);
}
 
int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("OpenGl Cube | Bankalore Example");
    glClearColor(0, 0, 0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100);
    glutDisplayFunc(Cube);
    RenderWithTime();
    glutMainLoop();
}

