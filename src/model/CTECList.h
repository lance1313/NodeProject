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
	int getSize();
	Type get();
	Type set();
	Type remove();
	void add();
	void add();
	virtual ~CTECList();
};

#endif /* SRC_MODEL_CTECLIST_H_ */
