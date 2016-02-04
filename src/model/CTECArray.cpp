/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jlin3312
 */

#include "CTECArray.h"
#include <iostream>
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;
//Defensive code
	if(size <= 0 )
	{
	cerr << "That is not allowed:(" << endl;
	return;
	}

for(int index = 0; index < size; index++)
	{
	if(head != nullptr)
	{
		//regular ArrayNode being made
		ArrayNode<Type> nextNode;
		//
		nextNode.setNext(head);
		//set head to address of next node
		this->head = &nextNode;
	}
	else
	{
	//first ArrayNode needs to be made.
	ArrayNode<Type> firstNode;
	this->head = &firstNode;
	}
	}

}
/**
 * this destroys unused nodes int the array.
 */
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		//check ArrayNode has pointer to nxt.
		if(deleteMe->getNext() != nullptr)
		{
			//set head to nxt pointer
			head = deleteMe->getNext();
			//delete the pointer
			deleteMe->setNext(nullptr);

		}
		//delete the ArrayNode
					delete deleteMe;
					//point to the next Node.
					deleteMe = head;

	}

	delete head;
}

/**
 * this gets the size of the array.
 */
template <class Type>
int CTECArray<Type> ::  getSize()
{
	return this->size;
}
template <class Type>
void CTECArray<Type> ::  set(int position, Type value)
{
	if(position >= size || position < 0)
		{
			//Out of bounds d must do somthing about it.
			cerr << "position value is out of bounds :(" << endl;

		}

	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}

			else
			{
				current->setValue();
			}

		}
	}

}

/**
 * this gets a value from the array
 */
template <class Type>
Type* CTECArray<Type> ::  get(int position)
{
	//we need to do bounds checking so we don't crash the program.
	if(position >= size || position < 0)
	{
		//Out of bounds d must do somthing about it.
		cerr << "position value is out of bounds :(" << endl;
		return nullptr;

	}

	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			//Not in the right spot go to next spot.
			if(spot != position)
			{
				current = current->getNext();
			}

			else
			{
				return current->getValue();
			}
		}

	}
}


