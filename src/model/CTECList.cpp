/*
 * CTECList.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: jlin3312
 */

#include "CTECList.h"

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
	Type thingToRemove;
	for(index = 0;index < size;index++)
	{
		if()
		{

		}
	}
	return thingToRemove;
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
