// Modified by: Alfredo Zavala
// Date: 3/2/2018
//

#include <GL/glx.h>
#include "fonts.h"


void showName( int botPos, int leftPos, int centerPos,
       		int textColor, const char* textName) {

	Rect r; 
	r.bot = botPos;
	r.left = leftPos;
	r.center = centerPos;

	ggprint8b(&r, 16, textColor, textName);
}

void drawBox(int xPos, int yPos) {

	static float angle  = 0;    

	// color is 3 unsigned bytes
	// 	   red, grn, blu 
    	glColor3ub(153, 255, 255);
	glPushMatrix();
	glTranslatef(xPos, yPos, 0);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50, -50, 0);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
		glVertex2i(0, 0);
		glVertex2i(100, 0);
		glVertex2i(100, 100);
		glVertex2i(0, 100);
	glEnd();
	
	Rect r; 
	r.bot = 50;
	r.left = 50;
	r.center = 1;

	ggprint8b(&r, 16, 0x00ffffff, "AlfredoZavala");

//	showName(xPos, xPos, 0, 0x00ffffff, "Alfredo Zavala");
	glPopMatrix();
}

