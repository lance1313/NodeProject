/*
 * NodeControllrer.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jlin3312
 */

#ifndef SRC_CONTROLLER_NODECONTROLLER_H_
#define SRC_CONTROLLER_NODECONTROLLER_H_
#include <string>
#include "../model/Node.cpp"
#include "../model/Node.h"

using namespace std;

class NodeController
{
private:
	Node<string> stringNode;
	Node<int> intNode;
public:
	NodeController();
	void start();
	virtual ~NodeController();
};

#endif /* SRC_CONTROLLER_NODECONTROLLER_H_ */
