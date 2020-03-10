#include <iostream>
#include <iomanip>
#include <limits>
#include "rank.h"

/*! \addtogroup test
*  unit test
*  @{
*/

int main()
{
	float e = 0.003;										// is a variable declaration, which stores the accuracy 
	float arg[4] = { 1., 1. / 81, 1. / 625, 1. / 2401 };	// is a variable declaration, which stores the first sequence
	float arg1[5];										// is a variable declaration, which stores the second sequence
	float b = 0.;										// is a variable declaration, which stores the amount of the sequence with set accurace
	float s = 0.;										// is a variable declaration, which stores the amount of the sequence
	int el = 0;

	b = sum(e, &el, arg1);								//is calling a function from the "rank" library
	s = arg[0] + arg[1] + arg[2] + arg[3];				// is calculation of the amount of the first sequence
	if (b != s)											// if the amount of the first sequence do not equal the amount of the second sequence
	{
		std::cout.precision(9);
		std::cout << "The amount of the first sequence do not equal the amount of the second sequence: " << s << " " << b << std::endl;
		return 1;
	}
	else
	{
		return 0;
	}

}
/*! @} */