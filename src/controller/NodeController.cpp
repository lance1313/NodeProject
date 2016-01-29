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

	stringArrayNode.setValue("Words in here");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrayNode);

}

NodeController::~NodeController()
{


}

void NodeController :: start()
{
	cout << "The contents of string node are " << stringNode.getValue() << endl;
	cout << "The content of the stringArrayNode are: " << stringArrayNode.getValue() << endl;
	cout << "This is the new value of stringArrayNode: " << (*stringArrayNode.getNext()).getValue() << endl;
}

