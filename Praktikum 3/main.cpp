
#include <GL/glut.h>

// Variabel rotasi sendi
static int pergelangan = 0, telapak = 0;
// Thumb
static int jempol1 = 0, ddjempol2 = 0;
// Index Finger
static int telunjuk1 = 0, telunjuk2 = 0, telunjuk3 = 0;
// Middle Finger
static int tengah1 = 0, tengah2 = 0, tengah3 = 0;
// Ring Finger
static int manis1 = 0, manis2 = 0, manis3 = 0;
// Little Finger
static int kelingking1 = 0, kelingking2 = 0, kelingking3 = 0;

// rotasi kamera
static int rotationY = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glScalef(1.0, 0.8, 1.0);

    glRotatef((GLfloat)rotationY, 0.0, 1.0, 0.0);

    // pergelangan

    glPushMatrix();
        glTranslatef(0.0, -3.0, 0.0);           
        glRotatef((GLfloat)pergelangan, 1.0, 0.0, 0.0);
        glTranslatef(0.0, 0.5, 0.0);

        glPushMatrix();
            glScalef(1.5, 1.2, 0.5);
            glutWireCube(1.0);
        glPopMatrix();

        //telapak
        glPushMatrix();
            glTranslatef(0.0, 0.8, 0.0);

            glTranslatef(0.0, 0.1, 0.0);
            glRotatef((GLfloat)telapak, 1.0, 0.0, 0.0);
            glTranslatef(0.0, 0.7, 0.0);

            glPushMatrix();
                glScalef(2.0, 2.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
        
            // jempol
            glPushMatrix();
                glTranslatef(1.2, -0.2, 0.0);
                glRotatef((GLfloat)jempol1, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
                glTranslatef(0.0, 0.3, 0.0);
                glRotatef((GLfloat)ddjempol2, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            glPopMatrix();

            // telunjuk
            glPushMatrix();
                glTranslatef(0.8, 0.9, 0.0);
                glRotatef((GLfloat)telunjuk1, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
                glTranslatef(0.0, 0.3, 0.0);
                glRotatef((GLfloat)telunjuk2, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.0, 0.3, 0.0);
                glRotatef((GLfloat)telunjuk3, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            glPopMatrix();

            // jari tengah
            glPushMatrix();
                glTranslatef(0.3, 0.95, 0.0);
                glRotatef((GLfloat)tengah1, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.9, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
                glTranslatef(0.0, 0.4, 0.0);
                glRotatef((GLfloat)tengah2, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.9, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.0, 0.4, 0.0);
                glRotatef((GLfloat)tengah3, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.9, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            glPopMatrix();

            // jari manis
            glPushMatrix();
                glTranslatef(-0.2, 0.9, 0.0);
                glRotatef((GLfloat)manis1, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
                glTranslatef(0.0, 0.3, 0.0);
                glRotatef((GLfloat)manis2, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.0, 0.3, 0.0);
                glRotatef((GLfloat)manis3, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            glPopMatrix();

            // kelingking
            glPushMatrix();
                glTranslatef(-0.8, 0.85, 0.0);
                glRotatef((GLfloat)kelingking1, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.7, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
                glTranslatef(0.0, 0.2, 0.0);
                glRotatef((GLfloat)kelingking2, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.7, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

                glTranslatef(0.0, 0.2, 0.0);
                glRotatef((GLfloat)kelingking3, 1.0, 0.0, 0.0);
                glTranslatef(0.0, 0.5, 0.0);

                glPushMatrix();
                    glScalef(0.4, 0.7, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            glPopMatrix();

        glPopMatrix();
    glPopMatrix();    

    glPopMatrix();     
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        // pergelangan
        case '1': pergelangan = (pergelangan + 5) % 360; glutPostRedisplay(); break;
        case '2': pergelangan = (pergelangan - 5) % 360; glutPostRedisplay(); break;

        // telapak
        case '3': telapak = (telapak + 5) % 360; glutPostRedisplay(); break;
        case '4': telapak = (telapak - 5) % 360; glutPostRedisplay(); break;

        // rotasi sumbu y
        case '5': rotationY = (rotationY + 5) % 360; glutPostRedisplay(); break;
        case '6': rotationY = (rotationY - 5) % 360; glutPostRedisplay(); break;

        // jempol
        case 'Q': jempol1 = (jempol1 + 5) % 360; glutPostRedisplay(); break;
        case 'q': jempol1 = (jempol1 - 5) % 360; glutPostRedisplay(); break;
        case 'W': ddjempol2 = (ddjempol2 + 5) % 360; glutPostRedisplay(); break;
        case 'w': ddjempol2 = (ddjempol2 - 5) % 360; glutPostRedisplay(); break;

        // telunjuk
        case 'E': telunjuk1 = (telunjuk1 + 5) % 360; glutPostRedisplay(); break;
        case 'e': telunjuk1 = (telunjuk1 - 5) % 360; glutPostRedisplay(); break;
        case 'R': telunjuk2 = (telunjuk2 + 5) % 360; glutPostRedisplay(); break;
        case 'r': telunjuk2 = (telunjuk2 - 5) % 360; glutPostRedisplay(); break;
        case 'T': telunjuk3 = (telunjuk3 + 5) % 360; glutPostRedisplay(); break;
        case 't': telunjuk3 = (telunjuk3 - 5) % 360; glutPostRedisplay(); break;

        // tengah
        case 'Y': tengah1 = (tengah1 + 5) % 360; glutPostRedisplay(); break;
        case 'y': tengah1 = (tengah1 - 5) % 360; glutPostRedisplay(); break;
        case 'U': tengah2 = (tengah2 + 5) % 360; glutPostRedisplay(); break;
        case 'u': tengah2 = (tengah2 - 5) % 360; glutPostRedisplay(); break;
        case 'I': tengah3 = (tengah3 + 5) % 360; glutPostRedisplay(); break;
        case 'i': tengah3 = (tengah3 - 5) % 360; glutPostRedisplay(); break;

        // manis
        case 'O': manis1 = (manis1 + 5) % 360; glutPostRedisplay(); break;
        case 'o': manis1 = (manis1 - 5) % 360; glutPostRedisplay(); break;
        case 'P': manis2 = (manis2 + 5) % 360; glutPostRedisplay(); break;
        case 'p': manis2 = (manis2 - 5) % 360; glutPostRedisplay(); break;
        case 'A': manis3 = (manis3 + 5) % 360; glutPostRedisplay(); break;
        case 'a': manis3 = (manis3 - 5) % 360; glutPostRedisplay(); break;

        // kelingking 
        case 'S': kelingking1 = (kelingking1 + 5) % 360; glutPostRedisplay(); break;
        case 's': kelingking1 = (kelingking1 - 5) % 360; glutPostRedisplay(); break;
        case 'D': kelingking2 = (kelingking2 + 5) % 360; glutPostRedisplay(); break;
        case 'd': kelingking2 = (kelingking2 - 5) % 360; glutPostRedisplay(); break;
        case 'F': kelingking3 = (kelingking3 + 5) % 360; glutPostRedisplay(); break;
        case 'f': kelingking3 = (kelingking3 - 5) % 360; glutPostRedisplay(); break;

        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Agathan Khairy  - 24060123140129");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
