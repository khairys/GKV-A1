#include <GL/glut.h>
#include <cmath>

// Fungsi untuk menggambar lingkaran
void drawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_POLYGON);
    for (int i = 0; i < num_segments; i++) {
        float theta = 2.0f * M_PI * i / num_segments;
        glVertex2f(cx + r * cos(theta), cy + r * sin(theta));
    }
    glEnd();
}

// Fungsi untuk menggambar background
void background() {
    // Tanah
    glColor3ub(89, 166, 64); 
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -1.0f); 
        glVertex2f( 1.0f, -1.0f);  
        glVertex2f( 1.0f, -0.5f);  
        glVertex2f(-1.0f, -0.5f);
    glEnd();
    
    // Aspal
    glColor3ub(82, 82, 82);
    glBegin(GL_QUADS);
        glVertex2f(-1.0f, -0.95f); 
        glVertex2f( 1.0f, -0.95f);  
        glVertex2f( 1.0f, -0.65f); 
        glVertex2f(-1.0f, -0.65f); 
    glEnd();
}

// Fungsi untuk menggambar gunung
void gunung() {
    // Gunung dark
    glColor3ub(82, 80, 62); 
    glBegin(GL_TRIANGLES);
        glVertex2f(-1.0f, -0.5f);  
        glVertex2f( 0.0f,  0.4f);   
        glVertex2f( 0.2f, -0.5f);  
    glEnd();

    // Gunung light 
    glColor3ub(130, 128, 100); 
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.2f, -0.5f); 
        glVertex2f( 0.0f,  0.4f);   
        glVertex2f( 1.0f, -0.5f);  
    glEnd();
}

// Fungsi untuk menggambar matahari 
void matahari() {
    glColor3ub(255, 204, 0);
    float x = 0.7f, y = 0.7f, radius = 0.1f;
    int numSegments = 50;
    drawCircle(x, y, radius, numSegments);
}

// Fungsi untuk menggambar pohon 
void pohon(float geser) {
    // Batang pohon
    glColor3f(0.5f, 0.25f, 0.0f);  
    glBegin(GL_QUADS);
        glVertex2f(-0.05f + geser, -0.5f);
        glVertex2f( 0.05f + geser, -0.5f);
        glVertex2f( 0.05f + geser, -0.3f);
        glVertex2f(-0.05f + geser, -0.3f);
    glEnd();

    // Daun 1
    glColor3ub(49, 120, 25);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.15f + geser, -0.3f);
        glVertex2f( 0.15f + geser, -0.3f);
        glVertex2f( 0.0f  + geser, -0.15f);
    glEnd();

    // Daun 2
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.13f + geser, -0.22f);
        glVertex2f( 0.13f + geser, -0.22f);
        glVertex2f( 0.0f  + geser, -0.05f);
    glEnd();

    // Daun 3
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.11f + geser, -0.12f);
        glVertex2f( 0.11f + geser, -0.12f);
        glVertex2f( 0.0f  + geser,  0.05f);
    glEnd();
}


void mobil() {
    glPushMatrix();  
    glTranslatef(0.2f, -0.55f, 0.0f); //translate
    
    // body atas
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
        glVertex2f(-0.63f, -0.2f);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.4f,  0.08f);
        glVertex2f(-0.63f,  0.08f);
    glEnd();

	// body bawah
    glColor3ub(128, 128, 128); // Abu-abu
    glBegin(GL_QUADS);
        glVertex2f(-0.63f, -0.2f);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.4f, -0.15f);
        glVertex2f(-0.63f, -0.15f);
    glEnd();

    // jendela
    glColor3ub(220, 240, 236);
    glBegin(GL_QUADS);
        glVertex2f(-0.6f, -0.05f);
        glVertex2f(-0.45f, -0.05f);
        glVertex2f(-0.45f,  0.05f);
        glVertex2f(-0.6f,  0.05f);
    glEnd();

    // kargo
    glColor3ub(0, 128, 255);
    glBegin(GL_QUADS);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f( 0.2f, -0.2f);
        glVertex2f( 0.2f,  0.12f);
        glVertex2f(-0.4f,  0.12f);
    glEnd();
    
    // Lampu 
    glPushMatrix();
    glTranslatef(-0.61f, -0.15f, 0.0f); // translate
    glRotatef(90, 0.0f, 0.0f, 1.0f); // rotasi
    glColor3ub(255, 255, 0);

    glBegin(GL_QUADS);
        glVertex2f(-0.02f, -0.01f);
        glVertex2f(0.04f, -0.01f);
        glVertex2f(0.04f, 0.02f);
        glVertex2f(-0.02f, 0.02f);
    glEnd();
    glPopMatrix();

    // Roda
    float roda_radius = 0.08f;


    glColor3ub(0, 0, 0); 
    drawCircle(-0.5f, -0.23f, roda_radius, 50); 
    glColor3ub(196, 196, 196);
    drawCircle(-0.5f, -0.23f, roda_radius * 0.5f, 50);

    // Roda 2
    glColor3ub(0, 0, 0);
    drawCircle(-0.1f, -0.23f, roda_radius, 50);
    glColor3ub(196, 196, 196);
    drawCircle(-0.1f, -0.23f, roda_radius * 0.5f, 50);

    // Roda 3
    glColor3ub(0, 0, 0);
    drawCircle(0.1f, -0.23f, roda_radius, 50);
    glColor3ub(196, 196, 196);
    drawCircle(0.1f, -0.23f, roda_radius * 0.5f, 50);

    glPopMatrix();  
}


// Fungsi menggabung keseluruhan
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    background();
    matahari();
    gunung();
    pohon(-0.6f);
    pohon(0.0f);
    pohon(0.6f);
    mobil();

    glutSwapBuffers();
}


void init() {
	// background langit
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("agathan_2406013140129_GKV");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

