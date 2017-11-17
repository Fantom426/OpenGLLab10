#include "figures.h"

void triangle()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0.12, 0.54, 0.33);
	glVertex2f(0.12, 0.42);
	glVertex2f(0.44, 0.91);
	glVertex2f(0.69, 0.69);
	glEnd();
}
void triangle2()
{
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 0);
	glVertex2f(-0.8, -0.8);
	glColor3f(1, 0, 0);
	glVertex2f(-0.9, -0.2);
	glColor3f(1, 1, 0);
	glVertex2f(0.3, -0.5);
	glEnd();
}
void rect()
{
	glBegin(GL_QUADS);
	glColor3f(0.27, 0.85, 0.12);
	glVertex2f(0.2, 0.4);
	glVertex2f(0.8, -0.1);
	glVertex2f(-0.5, -0.346);
	glVertex2f(-0.4, 0.6);
	glEnd();
}
void square()
{
	glBegin(GL_QUADS);
	glColor3f(0.52, 0.44, 0.33);
	glVertex2f(0.9, 0.9);
	glVertex2f(0.9, -0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(-0.9, 0.9);
	glEnd();
}
void teapot()
{
	glutWireTeapot(0.55);
}
void cube()
{
	glutWireCube(0.55);
	
}
void sphere()
{
	glutWireSphere(0.55, 20, 20);
}
void cylinder() 
{
	glutWireCylinder(0.5, 30, 30, 30);
}
void icosahedron()
{
	glutWireIcosahedron();
}

void task2()
{
	triangle2();
	triangle();
	rect();
	square();
}