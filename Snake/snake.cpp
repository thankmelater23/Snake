#include "snake.h"
#include "defined.h"
#include "DarkGDK.h"


//Snake
Snake::Snake(void)
{
}

void Snake::move()
{
	savePos();

}

void Snake::savePos()
{
	preX = x;
	preY = y;
	preDir = dir;
}



//Head
Head::Head()
{
	dbCreateAnimatedSprite(HEAD,"head//headAni.bmp", 4, 1, HEAD);
	dbSprite(HEAD, 102, 102, HEAD);
}

Head::Head(int original)
{
}

void Head::goDown()
{
}

void Head::goUp()
{
}


void Head::goLeft()
{
}


void Head::goRight()
{
}



//Body
Body::Body()
{
	dbLoadImage("body//bodyWN.bmp", BODY);
	dbSprite(BODY, 80, 83, BODY);
}

Body::Body(int original)
{
	dbLoadImage("body//bodyEW.bmp", BODY + 1);
	dbSprite(BODY + 1, 82, 104, BODY + 1);
}

/*
dbLoadImage("body//bodyEW.bmp", BODY + 1);
	dbSprite(BODY + 1, 82, 104, BODY + 1);

	dbLoadImage("body//bodyNS.bmp", BODY + 1);
	dbSprite(BODY + 1, 84, 100, BODY + 1);


	dbLoadImage("body//bodyES.bmp", BODY);
	dbSprite(BODY, 80, 79, BODY);

	dbLoadImage("body//bodyWS.bmp", BODY);
	dbSprite(BODY, 80, 79, BODY);

	dbLoadImage("body//bodyEN.bmp", BODY);
	dbSprite(BODY, 80, 83, BODY);

	dbLoadImage("body//bodyWN.bmp", BODY);
	dbSprite(BODY, 80, 83, BODY);

	*/