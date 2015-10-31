#include "DarkGDK.h"
#include "defined.h"
#include "function.h"
#include "snake.h"
#include  "vector"

using namespace std;





void DarkGDK ( )
{
	loadSettings();
	loadResources();

	Head *head = new Head();
	vector<Snake * > snake(2);

	int x, y;
	x = dbScreenWidth();
	y = dbScreenHeight();
	int fps = dbScreenFPS();

int a = 0;
		while(LoopGDK())
		{
			dir(*head);
			//move(snake, *head);
			dbPasteImage(MAP, 0, 0);
			
			dbSync();
		}

		dbSyncOff();

		return;
}