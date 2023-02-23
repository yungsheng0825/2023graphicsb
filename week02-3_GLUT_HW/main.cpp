#include <GL/glut.h>
void display()
{
     glColor3f(234/255.0,140/255.0,130/255.0);

   glBegin(GL_POLYGON);
       glVertex2f((55-100)/100.0,-(47-100)/100.0);
       glVertex2f((59-100)/100.0,-(55-100)/100.0);
       glVertex2f((119-100)/100.0,-(36-100)/100.0);
       glVertex2f((129-100)/100.0,-(46-100)/100.0);
 glEnd();

 glColor3f(159/255.0,36/255.0,145/255.0);
 glBegin(GL_POLYGON);
       glVertex2f((85-100)/100.0,-(56-100)/100.0);
       glVertex2f((102-100)/100.0,-(53-100)/100.0);
       glVertex2f((88-100)/100.0,-(141-100)/100.0);
       glVertex2f((98-100)/100.0,-(139-100)/100.0);
glEnd();
glColor3f(45/255.0,230/255.0,89/255.0);
 glBegin(GL_POLYGON);
       glVertex2f((58-100)/100.0,-(93-100)/100.0);
       glVertex2f((67-100)/100.0,-(103-100)/100.0);
       glVertex2f((122-100)/100.0,-(87-100)/100.0);
       glVertex2f((129-100)/100.0,-(92-100)/100.0);
glEnd();
glColor3f(156/255.0,140/255.0,230/255.0);
 glBegin(GL_POLYGON);
       glVertex2f((32-100)/100.0,-(147-100)/100.0);
       glVertex2f((42-100)/100.0,-(155-100)/100.0);
       glVertex2f((149-100)/100.0,-(133-100)/100.0);
       glVertex2f((161-100)/100.0,-(145-100)/100.0);
glEnd();
glColor3f(50/255.0,56/255.0,189/255.0);
glBegin(GL_POLYGON);
       glVertex2f((123-100)/100.0,-(104-100)/100.0);
       glVertex2f((134-100)/100.0,-(107-100)/100.0);
       glVertex2f((143-100)/100.0,-(111-100)/100.0);
       glVertex2f((142-100)/100.0,-(127-100)/100.0);
glEnd();





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
