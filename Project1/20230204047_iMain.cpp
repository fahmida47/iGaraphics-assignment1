#include "iGraphics.h"
#include<iostream>
using namespace std;

int x = 300;
int y = 200;
int radius = 60;
int dx = 5;
int dy = 5;



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	iSetColor(0, 128, 255);
	// Circle Face //
	iCircle(x,y,radius,1000);
	iSetColor(0,128,225);
	iFilledCircle(x, y, radius, 1000);
	// Double shape //
		iSetColor(255, 255, 255);
	iFilledCircle(x, y - 10, radius - 10, 100);
	// Eyes //
	iSetColor(0,0,0);
	 iFilledCircle (x-20,y+20,radius-52, 100);// right
	 iSetColor(0, 0, 0);
	 iFilledCircle(x+20,y+20, radius-52, 100);// left
	 // Nose //
	 iSetColor(204, 0, 0);
	 iFilledCircle(x,y-5,radius-53, 100);
	 // Black line
	 iSetColor(0, 0, 0);
	 iLine(x + 15, y - 5, x + 40, y - 10);
	 iLine(x - 15, y, x - 40, y);
	 iLine(x - 15, y + 5, x - 40, y + 10);
	 iLine(x + 15 , y, x + 40, y);
	 iLine(x - 15, y - 5, x - 40, y - 10);
	 iLine(x - 15, y, x - 40, y);
	 iLine(x + 15, y + 5, x + 40, y + 10);
	 iLine(x - 15, y, x - 40, y);
	 // Mouth 
	 iSetColor(204, 0, 0);
	 iEllipse(x, y-30,20,10);
	 iFilledEllipse(x,y-30,20,10);
	
	 
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\w')// up
	{
		y += 10;
	}
	if (key == '\s')// down
	{
		y -= 10;
	}
	if (key == '\a')// left
	{
		x -= 10;
	}
	if (key == '\d')// right
	{
		x += 10;
	}

	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}
void change()
{
	x += dx;
	y += dy;
	if ( x-radius<= 0 || x + radius >= 600 )
	{
		dx=-dx;
	}
	if (y - radius <= 0 || y + radius >= 400 )
	{
		dy=-dy;
	}
}
int main()
{
	///srand((unsigned)time(NULL));
	iSetTimer(35,change);
	iInitialize(600, 400, "Project Title");
	///updated see the documentations
	iStart();
	return 0;
}