#include <GL/glut.h>
void display()
{
     glColor3f(1,1,0);///����
    glutSolidTeapot(0.5);///�j����

    glColor3f(0,1,0);///���
        glutSolidTeapot(0.3);///�p����


        glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week02");
  glutDisplayFunc(display);
 glutMainLoop();
}
