#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "endGames.h"
#include "jokePath.h"
#include "choices.h"
using namespace std;

void zeldaIntro()
{
	Beep(783.991, DURATION / 4);//G5
	Beep(739.989, DURATION / 4);//F#5
	Beep(622.254, DURATION / 4);//D#5
	Beep(440.000, DURATION / 4);//A4
	Beep(415.305, DURATION / 4);//G#4
	Beep(659.255, DURATION / 4);//E5
	Beep(830.609, DURATION / 4);//G#5
	Beep(1046.50, DURATION / 4);//C6
}
int main()
{
	zeldaIntro();
	srand(time(NULL)); //Seed random generator
	while (1)
	{
		welcome();
	}
	return 0;
}