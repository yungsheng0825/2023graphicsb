#include <GL/glut.h>
void display()
{
     glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.5);///大茶壺

    glColor3f(0,1,0);///綠色
        glutSolidTeapot(0.3);///小茶壺


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
