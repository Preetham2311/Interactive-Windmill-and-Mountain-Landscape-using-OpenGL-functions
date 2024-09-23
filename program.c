#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define PI 3.1416

GLfloat spin1 = 0.0;
GLfloat spin2 = 0.0;
GLfloat spin3 = 0.0;
GLfloat spin4 = 0.0;
GLfloat spin5 = 0.0;
GLfloat spin6 = 0.0;
GLfloat spin7 = 0.0;

GLfloat speed1 = 0.5;
GLfloat speed2 = 0.5;
GLfloat speed3 = 0.5;
GLfloat speed4 = 0.5;
GLfloat speed5 = 0.5;
GLfloat speed6 = 0.5;
GLfloat speed7 = 0.5;

GLint i;
GLfloat spin = 0.0;
int isDay = 1; 

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0, 1000.0, 0.0, 500.0, -500, 500);
}
void circle1(GLdouble rad)
{
    glPushMatrix();
    glutSolidSphere(rad, 50, 50);
    glPopMatrix();
}
void hill1()
{
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
    glVertex2i(0, 250);
    glVertex2i(200, 500);
    glVertex2i(400, 250);
    glEnd();
}

void hill2()
{
    glBegin(GL_POLYGON);
    glColor3f(0.33, 0.33, 0.33);
    glVertex2i(0, 450);
    glVertex2i(200,250);
    glVertex2i(0,250);
    glVertex2i(0,300);
    glEnd();
}

void hill3(){
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2i(200,250);
    glVertex2i(380,400);
    glVertex2i(650,250);
    glEnd();
}

void hill4(){
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.3, 0.3);
    glVertex2i(380,250);
    glVertex2i(640,450);
    glVertex2i(850,250);
    glEnd();
}

void hill5(){
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.6);
    glVertex2i(640,250);
    glVertex2i(900,450);
    glVertex2i(1400,250);
    glEnd();
}

void hill_snow1(){

    glBegin(GL_POLYGON);
    glColor3f(0.972, 0.972, 1.0);
    glVertex2i(200, 500);
    glVertex2i(280, 400);
    glVertex2i(250, 420);
    glVertex2i(250, 380);
    glVertex2i(235, 420);
    glVertex2i(230, 350);
    glVertex2i(220, 450);
    glVertex2i(220, 380);
    glVertex2i(210, 425);
    glVertex2i(200, 380);
    glVertex2i(190, 420);
    glVertex2i(180, 350);
    glVertex2i(170, 400);
    glVertex2i(160, 420);
    glVertex2i(155, 360);
    glVertex2i(145, 410);
    glVertex2i(120, 400);
    glEnd();
}

void hill_snow2(){

    glBegin(GL_POLYGON);
    glColor3f(0.972, 0.972, 1.0);
    glVertex2i(0, 450);
    glVertex2i(100, 350);
    glVertex2i(80, 380);
    glVertex2i(90, 290);
    glVertex2i(40, 360);
    glVertex2i(40, 300);
    glVertex2i(-85, 415);
    glEnd();

}

void hill_snow3() {
    glColor3f(0.972, 0.972, 0.972);
    
    glBegin(GL_POLYGON);
    glVertex2i(380, 400);
    glVertex2i(345, 370);
    glVertex2i(355, 320);
    glVertex2i(365, 370);
    glVertex2i(390, 280);
    glVertex2i(405, 370);
    glVertex2i(415, 320);
    glVertex2i(435, 370);
    glEnd();
    
}


void hill_snow4(){

    glBegin(GL_POLYGON);
    glColor3f(0.972, 0.972, 1.0);
    glVertex2i(490, 340);
    glVertex2i(470, 350);
    glVertex2i(490, 300);
    glVertex2i(640, 450);
    glVertex2i(677, 415);
    glVertex2i(630, 350);
    glVertex2i(580, 400);
    glVertex2i(590, 390);
    glVertex2i(550, 325);
    glVertex2i(590, 350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.972,0.972,0.972);
    glVertex2i(755,340);
    glVertex2i(720, 375);
    glVertex2i(755, 300);
    glVertex2i(780, 358);
    glEnd();

}


void hill_snow5(){

    glBegin(GL_POLYGON);
    glColor3f(0.972, 0.972, 1.0);
    glVertex2i(900, 450);
    glVertex2i(1000, 410);
    glVertex2i(1000, 380);
    glVertex2i(940, 370);
    glVertex2i(885, 410);
    glVertex2i(835, 400);
    glEnd();

}

void drawsky()
{
    glBegin(GL_QUADS);
    if (isDay)
    {
        glColor3f(0.2, 0.6, 1); 
    }
    else
    {
        glColor3f(0.0, 0.0, 0.2); 
    }
    glVertex2i(0, 500);
    glVertex2i(1000, 500);
    if (isDay)
    {
        glColor3f(0.7, 0.9, 1.0);
    }
    else
    {
        glColor3f(0.0, 0.0, 0.1);
    }
    glVertex2i(1000, 0);
    glVertex2i(0, 0);
    glEnd();
}

void Sun_Model()
{
    if (isDay)
    {
        glPushMatrix();
        glTranslatef(765, 400, 0);
        glColor3f(1.0, 0.843, 0.0);
        circle1(40);
        glPopMatrix();
    }
    else{
        glPushMatrix();
        glTranslatef(100, 450, 0);
        glColor3f(1.0, 1.0, 1.0); 
        circle1(30);
        glPopMatrix();
    }
}


void field()
{
    if (isDay)
    {
        glColor3f(0.533, 1.293, 0.0); 
    }
    else
    {
        glColor3f(0.1, 0.3, 0.1); 
    }
    glRecti(0.0, 0.0, 1000.0, 250.0);
}

void circle(GLdouble rad)
{
    glPushMatrix(); 

    
    glColor3f(1.0, 1.0, 1.0);
    glutSolidSphere(rad, 50, 50);

    glPopMatrix(); 
}
void circle_shadow(GLdouble rad)
{
    glPushMatrix(); 

    
    glColor3f(0.2, 0.2, 0.2);
    glutSolidSphere(rad, 50, 50);

    glPopMatrix();
}
void Windmill_Stand_Model_shadow()
{   if (isDay){
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(-6, 2);   
    glVertex2i(3, 11.5);    
    glVertex2i(0, 140);   
    glEnd();
    }
}
void Windmill_Stand_Model()
{
    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_TRIANGLES);
    glVertex2i(-6, 0);  
    glVertex2i(6, 0);    
    glVertex2i(0, 140);   
    glEnd();
}


void Windmill_Blade1(GLfloat spin)
{
    glPushMatrix();
    glRotatef(spin, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();
}

void Windmill_Blade2(GLfloat spin)
{
    glPushMatrix();
    glRotatef(spin + 120, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();
}

void Windmill_Blade3(GLfloat spin)
{
    glPushMatrix();
    glRotatef(spin + 240, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();
}

void Windmill_Blade1_shadow(GLfloat spin)
{   if (isDay){
    glPushMatrix();
    glRotatef(-spin, 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();
   }
}

void Windmill_Blade2_shadow(GLfloat spin)
{   if (isDay){
    glPushMatrix();
    glRotatef(-(spin + 120), 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();}
}

void Windmill_Blade3_shadow(GLfloat spin)
{ if (isDay){
    glPushMatrix();
    glRotatef(-(spin + 240), 0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(-75, -30);
    glVertex2i(-70, -35);
    glVertex2i(0, -5);
    glEnd();
    glPopMatrix();}
}
void Windmill_shadow(GLfloat spin)
{   if (isDay){
    
    glPushMatrix();
    Windmill_Stand_Model_shadow();
    glPopMatrix();

    
    glColor3f(0.2, 0.2, 0.2); 
    glPushMatrix();
    glTranslatef(0, 140, 0);
    circle_shadow(10);
    glPopMatrix();

    
    glColor3f(0.2, 0.2, 0.2);
    glPushMatrix();
    glTranslatef(0, 140, 0);
    Windmill_Blade1_shadow(spin);
    Windmill_Blade2_shadow(spin);
    Windmill_Blade3_shadow(spin);
    glPopMatrix();
}
}

void Windmill(GLfloat spin)
{
    
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();

    
    glColor3f(0.6, 0.3, 0.3); 
    glPushMatrix();
    glTranslatef(0, 140, 0);
    circle(10);
    glPopMatrix();

    
    glPushMatrix();
    glTranslatef(0, 140, 0);
    Windmill_Blade1(spin);
    Windmill_Blade2(spin);
    Windmill_Blade3(spin);
    glPopMatrix();
}

void Windmill_One_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(403, 57, 0); 
    glScalef(1.2, 1.2, 1.2); 
    glRotatef(135,0.0,0.0,1.0);
    Windmill_shadow(spin1);
    glPopMatrix();}
}


void Windmill_One()
{
    glPushMatrix();
    glTranslatef(400, 50, 0); 
    glScalef(1.2, 1.2, 1.0); 
    Windmill(spin1);
    glPopMatrix();

    
}

void Windmill_Two_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(203, 57, 0); 
    glScalef(1.0, 1.0, 1.0);
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin2);
    glPopMatrix();}
}

void Windmill_Two()
{
    glPushMatrix();
    glTranslatef(200, 50, 0); 
    glScalef(1.0, 1.0, 1.0); 
    Windmill(spin2);
    glPopMatrix();
}

void Windmill_Three_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(603, 57, 0); 
    glScalef(1.0, 1.0, 1.0); 
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin3);
    glPopMatrix();
}
}
void Windmill_Three()
{
    glPushMatrix();
    glTranslatef(600, 50, 0); 
    glScalef(1.0, 1.0, 1.0); 
    Windmill(spin3);
    glPopMatrix();
}
void Windmill_Four_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(803, 87, 0); 
    glScalef(1.0, 1.0, 1.0); 
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin4);
    glPopMatrix();}
}

void Windmill_Four()
{
    glPushMatrix();
    glTranslatef(800, 80, 0);
    glScalef(1.0, 1.0, 1.0); 
    Windmill(spin4);
    glPopMatrix();
}
void Windmill_Five_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(102, 204, 0); 
    glScalef(0.6, 0.6, 1.0); 
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin5);
    glPopMatrix();
}
}


void Windmill_Five()
{
    glPushMatrix();
    glTranslatef(100, 200, 0); 
    glScalef(0.6, 0.6, 1.0); 
    Windmill(spin5);
    glPopMatrix();
}
void Windmill_Six_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(902, 204, 0); 
    glScalef(0.6, 0.6, 1.0); 
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin6);
    glPopMatrix();
}
}


void Windmill_Six()
{
    glPushMatrix();
    glTranslatef(900, 200, 0); 
    glScalef(0.6, 0.6, 1.0); 
    Windmill(spin6);
    glPopMatrix();
}
void Windmill_Seven_Shadow()
{ if (isDay){
    glPushMatrix();
    glTranslatef(702, 204, 0); 
    glScalef(0.6, 0.6, 1.0); 
    glRotatef(135,0.0,0.0,1.0); 
    Windmill_shadow(spin7);
    glPopMatrix();
}
}


void Windmill_Seven()
{
    glPushMatrix();
    glTranslatef(700, 200, 0); 
    glScalef(0.6, 0.6, 1.0); 
    Windmill(spin7);
    glPopMatrix();
}





void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawsky();
    Sun_Model();
    field();
    hill3();
    hill1();
    hill2();
    hill5();
    hill4();
    hill_snow1();
    hill_snow2();
    hill_snow3();
    hill_snow4();
    hill_snow5();
    Windmill_One_Shadow();
    Windmill_One();
    Windmill_Two_Shadow();
    Windmill_Two();
    Windmill_Seven_Shadow();
    Windmill_Six_Shadow();
    Windmill_Three_Shadow();
    Windmill_Three();
    Windmill_Four_Shadow();
    Windmill_Four();
    Windmill_Five_Shadow();
    Windmill_Five();
    
    Windmill_Six();
   
    Windmill_Seven();
    glFlush();
}

void spinDisplay1(void)
{
    spin1 += speed1;
    if (spin1 > 360.0)
        spin1 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay2(void)
{
    spin2 += speed2;
    if (spin2 > 360.0)
        spin2 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay3(void)
{
    spin3 += speed3;
    if (spin3 > 360.0)
        spin3 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay4(void)
{
    spin4 += speed4;
    if (spin4 > 360.0)
        spin4 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay5(void)
{
    spin5 += speed5;
    if (spin5 > 360.0)
        spin5 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay6(void)
{
    spin6 += speed6;
    if (spin6 > 360.0)
        spin6 -= 360.0;
    glutPostRedisplay();
}

void spinDisplay7(void)
{
    spin7 += speed7;
    if (spin7 > 360.0)
        spin7 -= 360.0;
    glutPostRedisplay();
}
void spinDisplayAll(void) {
    spin1 += speed1;
    if (spin1 > 360.0) spin1 -= 360.0;
    spin2 += speed2;
    if (spin2 > 360.0) spin2 -= 360.0;
    spin3 += speed3;
    if (spin3 > 360.0) spin3 -= 360.0;
    spin4 += speed4;
    if (spin4 > 360.0) spin4 -= 360.0;
    spin5 += speed5;
    if (spin5 > 360.0) spin5 -= 360.0;
    spin6 += speed6;
    if (spin6 > 360.0) spin6 -= 360.0;
    spin7 += speed7;
    if (spin7 > 360.0) spin7 -= 360.0;
    glutPostRedisplay();
}



void keyFunc(unsigned char key, int x, int y)
{
    switch(key)
    {
    case '1':
        glutIdleFunc(spinDisplay1);
        break;
    case '2':
        glutIdleFunc(spinDisplay2);
        break;
    case '3':
        glutIdleFunc(spinDisplay3);
        break;
    case '4':
        glutIdleFunc(spinDisplay4);
        break;
    case '5':
        glutIdleFunc(spinDisplay5);
        break;
    case '6':
        glutIdleFunc(spinDisplay6);
        break;
     case '7':
        glutIdleFunc(spinDisplay7);
        break;
    case 'q':
        speed1 = 1.0;
        break;
    case 'w':
        speed1 = 0.5;
        break;
    case 'e':
        speed1 = 2.0;
        break;
    case 'r':
        speed2 = 1.0;
        break;
    case 't':
        speed2 = 0.5;
        break;
    case 'y':
        speed2 = 2.0;
        break;
    case 'u':
        speed3 = 1.0;
        break;
    case 'i':
        speed3 = 0.5;
        break;
    case 'o':
        speed3 = 2.0;
        break;
    case 'p':
        speed4 = 1.0;
        break;
    case 'a':
        speed4 = 0.5;
        break;
    case 's':
        speed4 = 2.0;
        break;
    case 'd':
        speed5 = 1.0;
        break;
    case 'f':
        speed5= 0.5;
        break;
    case 'g':
        speed5 = 2.0;
        break;
    case 'h':
        speed6 = 1.0;
        break;
    case 'j':
        speed6 = 0.5;
        break;
    case 'k':
        speed6 = 2.0;
        break;
    case 'b':
        speed7 = 1.0;
        break;
    case 'n':
        speed7 = 0.5;
        break;
    case 'm':
        speed7 = 2.0;
        break;
    
     case '0':  
        glutIdleFunc(spinDisplayAll);
        break;
    case 'z':
        glutIdleFunc(NULL);
        break;
    default:
        break;
    }
    glFlush();
}
void menu(int option)
{
    switch (option)
    {
        case 1:
            isDay = 1; 
            break;
        case 2:
            isDay = 0; 
            break;
    }
    glutPostRedisplay();
}

void createMenu()
{
    glutCreateMenu(menu);
    glutAddMenuEntry("Day", 1);
    glutAddMenuEntry("Night", 2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1000, 500);
    glutCreateWindow("Interactive Windmill and Mountain Landscape using OpenGL functions");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyFunc);
    createMenu();
    glutMainLoop();
}
