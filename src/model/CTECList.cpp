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
//find the next pot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//remove head
	delete head;
	//move head to next
	head = newHead;
}
/**
 *this removes the last node ,and moves tail to the next node.
 */
template <class Type>
Type CTECList<Type>::removeFromEnd()
{
//
}
/**
 *remove node from specified spot
 */
template <class Type>
Type CTECList<Type>::removeFromIndex()
{

}
/**
 *
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

}
/**
 *get value from last node
 */
template <class Type>
Type CTECList<Type>::getEnd()
{

}
/**
 *get value from specified spot
 */
template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{

}
/**
 *add the the front of the list
 */
template <class Type>
void CTECList<Type>::addToFront()
{

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
void CTECList<Type>::addToIndex()
{

}
