/*
 * CTECList.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: jlin3312
 */

#include "CTECList.h"
#include <assert.h>

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->tail = nullptr;


}
template <class Type>
CTECList<Type>::~CTECList()
{
	// TODO Auto-generated destructor stub
}
/**
 *initialize the size of the list
 */
template <class Type>
int CTECList<Type>::setSize()
{
return this->size;
}
/**
 *Makes a new head and moves it to the next front node
 */
template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type thingToRemove;
//find the next pot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//get what head is holding
	thingToRemove = this->head->getValue();
	//remove head
	delete head;
	//move head to next
	head = newHead;

	return thingToRemove;
}
/**
 *this removes the last node ,and moves tail to the next node.
 */
template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	//defencive code
	assert(this->size > 0);
	Type thingToRemove;
	ArrayNode<Type> * newTail = new ArrayNode<Type>();
	newTail = tail->getNext();
	thingToRemove = this->tail->getValue();
	delete tail;
	tail = newTail;
	return thingToRemove;
}
/**
 *remove node from specified spot
 */
template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{

	assert(index >= 0);
	assert(index < size);
	assert(size > 0);
	ArrayNode<Type> * deleteMe = new ArrayNode<Type>();
	Type thingToRemove;
	ArrayNode<Type> * newNext = new ArrayNode<Type>();
	ArrayNode<Type> * previous = new ArrayNode<Type>();

	if(index == 0){
		thingToRemove = removeFromFront();
	}

	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{

	for(int spot = 0; spot < index+1  ; spot++)
	{

	}

	}
	delete deleteMe;
	ArrayNode<Type> * previous = newNext;
	return deleteMe;
}
/**
 * sets the value in the list
 */
template <class Type>
Type CTECList<Type>::set(int index, const Type& value)
{

}

/**
 *get value from the first node
 */
template <class Type>
Type CTECList<Type>::getFront()
{
	return head->getValue();
}
/**
 *get value from last node
 */
template <class Type>
Type CTECList<Type>::getEnd()
{
	return tail->getValue();
}
/**
 *get value from specified spot
 */
template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{
	for(index = 0;index < size;index++)
		{

		}

}
/**
 *add the the front of the list
 */
template <class Type>
void CTECList<Type>::addToFront()
{
	ArrayNode<Type> * newHead = ArrayNode<Type>();
}
/**
 *add to the end of the list
 */
template <class Type>
void CTECList<Type>::addToEnd()
{

}
/**
 *add node at specified spot in list
 */
template <class Type>
void CTECList<Type>::addToIndex(int index,const Type& value)
{
	for(index = 0;index < size;index++)
		{

		}

}
