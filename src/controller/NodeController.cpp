/*
 * NodeControllrer.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jlin3312
 */

#include "NodeController.h"

#include <iostream>
using namespace std;

NodeController::NodeController()
{
	stringNode.setValue("asdf");
	intNode.setValue(99);
	ints = new CTECArray<int>(5);

	stringArrayNode.setValue("Words in here");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrayNode);

}

NodeController::~NodeController()
{


}

void NodeController :: start()
{
	arrayTimer.startTimer();
	for(int index = 0; index < ints->getSize(); index++)
	{
		ints->set(index, (index *23));
	}
	for(int index =ints->getSize()-1; index >= 0; index--)
	{
		cout << "the contents of ints is " << index << " are: " << ints->get(index) << endl;
	}
	arrayTimer.stopTimer();
	arrayTimer.displayTimerInformation();
}

