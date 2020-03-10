#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include "rank.h"


/*! \addtogroup test
*  unit test
*  @{
*/
int sum(int, char *[])
{
	float e = 0.1;										// is a variable declaration, which stores the accuracy 
	float arg1[4];										// is a variable declaration, which stores the second sequence
	float b = 0.;
	int el = 0;

	b = sum(e, &el, arg1);								//is calling a function from the "rank" library
	
	std::cout.precision(9);
	std::cout << "The amount of the first sequence and amount of the second sequence: " << "1.04504 "<<b << std::endl;
	if (abs(b - 1.04504) >= e)							// if the amount of the first sequence do not equal the amount of the second sequence
	{
		return 1;
	}
	else 
	{
		return 0;
	}
	
}
/*! @} */