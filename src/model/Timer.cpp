/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: jlin3312
 */
#include <iostream>
#include <iomanip>
#include "Timer.h"
using namespace std;

Timer :: Timer()
{

	executionTime = 0;
}

void Timer :: startTimer()
{
	executionTime = clock();
}
void Timer :: stopTimer()
	{
	executionTime = clock() - executionTime;
	}
void Timer :: resetTimer()
	{
	executionTime = 0;
	}
void Timer :: displayTimerInformation()
	{
		cout << fixed;
		cout << setprecision(8);

		cout << executionTime << "s (microseconds) for the code" << endl;
		cout << "Which is " << float(executionTime)/CLOCKS_PER_SEC<<"seconds" << endl;

	}
long Timer :: getExecutionTimeInMicroseconds()
	{
return executionTime;
	}



