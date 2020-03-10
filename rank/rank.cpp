/**
*   \brief	Brief description.
*   \file	rank.cpp
*   \version	1.0
*   \copyright
*
*   purpose  functions for filling the array and calculate its amount with set accurace
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include "rank.h"

float second(int i); // function declaration

/**
* Function "Sum" creates the sequence and calculation of amount of this sequence.
* In a loop, two functions are called. First is "numeric" and second is "second".
* The loop will finishing when an accuracy of calculations is achieved.
*
* \brief return amount of the sequence and the element number, which was complete the loop
* \param[arg] the sequence 
*
* \param[e] the accuracy
*
* \return amount of the sequence and the element number, which was complete the loop
*/

float sum(float e, int* el, float* arg ) 
{
	float s = 0.f;		// is a variable declaration, which stores the amount of the sequence 
	float b = 0.0f;		// is a variable declaration, which stores the element for determination of accuracy 
	int i=1;			// is a variable declaration, which stores the cycle step
	do {							// is a start of cycle	
		arg[i] = numeric(i);		// is calling a function, which returns the element of the sequence
		s += arg[i];				// is calculation of the amount of the sequence 
		b = second(i);				// is calling a function, which returns the element for determination of accuracy
		i++;						// is a step increment
	} while (abs(b) > e);			// is a end of cycle, cycle is beak if the element for determination of accuracy has less than accuracy

	*el = i;						// is a memorization of the number of element, which was complete the cycle
	return s;						// is a return of the amount of the sequence
}

/**
* Function "numeric" creates the element of the sequence.
* The element of the sequence number is passed from the loop, which is written into the function "Sum" 
*
* \brief return element of sequence
*
* \param[i] i number of elements 
*
* \return element of the sequence
*/

float numeric(int i)
{
	return 1 / pow((2. * i - 1.), 4);	// is a calculation the element of the sequence and return 
}

/**
* Function "second" creates the element, which uses into the function "Sum" to verify the accuracy of the calculations.
* The element of the sequence number is passed from the loop, which is written into the function "Sum"
* \brief return element of sequence
*
* \param[i] i number of elements
*
* \return element for determination of accuracy
*/

float second(int i)
{
	return 1 / pow((2. * i - 1.), 3);	// is a calculation the element for determination of accuracy and a return
}