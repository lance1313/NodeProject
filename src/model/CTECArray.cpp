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

}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}


template <class Type>
int CTECArray<Type> ::  getSize()
{
	return this->size;
}
template <class Type>
void CTECArray<Type> ::  set(int position, Type value)
{

}

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


