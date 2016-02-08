/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jlin3312
 */

#ifndef SRC_MODEL_ARRAYNODE_H_
#define SRC_MODEL_ARRAYNODE_H_

#include "Node.h"

template <class Type>
class ArrayNode: public Node<Type>
{
private:
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(const Type& value);
	ArrayNode(const Type& value, ArrayNode * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode * next);
};

#endif /* SRC_MODEL_ARRAYNODE_H_ */
