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


