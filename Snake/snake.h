#ifndef snake_h
#define snake_h
#include "vector"
#include "defined.h"

class Snake
{
public:
	Snake();
	void move();
	void savePos();

public:
	bool life;
	bool dead;
	int x,y, preX, preY;
	direction dir;
	direction preDir;
};

class Head: public Snake
{
public:
	Head();
	Head(int original);
	void goUp();
	void goDown();
	void goLeft();
	void goRight();
};

class Body: public Snake
{
public:
	Body();
	Body(int original);
};


#endif