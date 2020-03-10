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
	float e = 0.03;										// is a variable declaration, which stores the accuracy 
	float arg[3] = {1., 1./81, 1./625};		// is a variable declaration, which stores the first sequence
	float arg1[4];										// is a variable declaration, which stores the second sequence
	float b = 0.0f;										// is a variable declaration, which stores the amount of the sequence with set accurace
	int el = 0;											// is a variable declaration, which stores the number of element 
	b = sum(e, &el, arg1);								//is calling a function from the "rank" library

	for (int i = 1; i < 4; i++)						// is a start of cycle
	{
		if (arg1[i] != arg[i-1])						// if the element of the first sequence do not equal the element of the second sequence
		{
			std::cout.precision(9);
			std::cout << "The element of the first sequence do not equal the element of the second sequence: " << arg[i - 1] << " " << arg1[i] << std::endl;
			return 1;									
		}
	}													// is a end of cycle
	
	return 0;
	
}
/*! @} */