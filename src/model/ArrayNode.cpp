/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: jlin3312
 */

#include "ArrayNode.h"
//#include<iostream>

template <class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>()//a super construtor.
{
	this->next = nullptr;
	//this->pointers = nullptr;

}
template <class Type>
ArrayNode<Type> :: ArrayNode(Type value) : Node<Type>()
{
	this->next = nullptr;
	this->value = value;

}


template <class Type>
ArrayNode<Type> :: ArrayNode(Type value, ArrayNode<Type> * next) : Node<Type>(value)
{
	this->next = next;
	this->value = value;
}

template <class Type>
ArrayNode<Type>::~ArrayNode() {
	// TODO Auto-generated destructor stub
}

template <class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this->next;
}


template <class Type>
void ArrayNode<Type> :: setNext(ArrayNode<Type> * next)
{
	this->next = next;
}
