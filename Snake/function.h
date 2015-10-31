#include  <vector>
#include "snake.h"

#ifndef function_h
#define function_h

using namespace std;

void loadSettings();
void loadResources();
void collision();
void move(vector<Snake *> snake, Head &head);
void dir(Head &head);
void headAni(Head &head);

#endif