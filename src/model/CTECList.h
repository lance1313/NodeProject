/*
 * CTECList.h
 *
 *  Created on: Feb 18, 2016
 *      Author: jlin3312
 */

#ifndef SRC_MODEL_CTECLIST_H_
#define SRC_MODEL_CTECLIST_H_
#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
int size;
ArrayNode<Type> * head;
ArrayNode<Type> * tail;

public:
	CTECList();
	int setSize();
	Type getFromIndex(int index);
	Type getFront();
	Type getEnd();
	Type set(int index, const Type& value);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex();
	void addToFront();
	void addToEnd();
	void addToIndex();
	//void add();
	virtual ~CTECList();
};

#endif /* SRC_MODEL_CTECLIST_H_ */
