#include "DarkGDK.h"
#include "defined.h"
#include "function.h"
#include  <vector>
#include "snake.h"

using namespace std;


//Game System
void loadSettings()
{
	dbSyncOn							();
	dbSyncRate						(SYNC_RATE);
	dbSetImageColorKey		( 0, 254, 0 );
	dbSetWindowPosition	( SCREEN_POSITION_X, SCREEN_POSITION_Y );
	dbSetDisplayMode 		( SCREEN_X, SCREEN_Y, 32 );

}
void loadResources()
{
	//Map
	dbLoadImage("map//board.bmp", MAP);
	dbPasteImage(MAP, 0, 0);
}

void dir(Head &head)
{

	head.savePos();

	if(dbRightKey())
	{
		head.dir = east;
		headAni(head);
	}

	if(dbLeftKey())
	{
		head.dir = west;
		headAni(head);
	}

	if(dbUpKey())
	{
		head.dir = north;
		headAni(head);
	}

	if(dbDownKey())
	{
		head.dir = south;
		headAni(head);
	}

}

void headAni(Head &head)
{
	int x = dbSpriteX(HEAD);
	int y =dbSpriteY(HEAD);

	switch(head.dir)
	{

	case west:
		{
			dbSetSpriteFrame(HEAD, 1);
			dbSprite(HEAD, x - MOVE_SPEED, y, HEAD);
			
			
			break;
		}

	case east:
		{
			dbSetSpriteFrame(HEAD, 2);
			dbSprite(HEAD, x + MOVE_SPEED, y, HEAD);
			break;
		}

	case north:
		{
			dbSetSpriteFrame(HEAD, 4);
			dbSprite(HEAD, x , y - MOVE_SPEED, HEAD);
			break;
		}
		case south:
		{
			dbSetSpriteFrame(HEAD, 3);
			dbSprite(HEAD, x, y  + MOVE_SPEED, HEAD);
			break;
		}
	}
}


//Game Play
void move(vector<Snake *> &snake, Head &head)
{
	vector<Snake *>::iterator iter = snake.begin() + 1;

	for(vector<Snake *>::iterator i = snake.begin(); i != snake.end(); ++i)
	{
		vector<Snake *>::iterator bi = --i;
		

		if(i == snake.begin())
		{
			(*i)->preX =  (*i)->x;
			(*i)->preY = (*i)->y;
			(*i)->x = head.preX;
			(*i)->y = head.preY;
			
		}
		
		else
		{
		
		(*i)->preX = (*i)->x;
		(*i)->preY = (*i)->y;
		(*i)->x = (*bi)->preX;
		(*i)->y = (*bi)->preY;

	}
	}

}
void collision()
{
}