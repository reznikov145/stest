#include <iostream>
#include <iomanip>
#include <limits>
#include "rank.h"
#include <cmath>
#include <fstream> 

using namespace std;

int main()
{
	float e = 0.0001f;   
	float arg [100000];	 
	float b = 0.f;		
	float sum1 = 0.f;	 
	int el = 0;			 
	ofstream ofs("serialisation.txt");		
	arg[0] = 0;			 
	b = sum(e, &el, arg);			
	for (int i = 1; i < el; i++)	
	{
		sum1 += arg[i];			
		if (!ofs.bad())				 
		{
			ofs << i << "; " << sum1 << endl;   
		}		
	}	
	float dif = b - 1.014678031;
	ofs.close();	
	std::cout.precision(9);
	std::cout << "The number of the element, at which was accuracy is achieved: " << el << std::endl;
	std::cout << "The amount of the sequence: " << "1,014678031" << std::endl;
	std::cout << "The amount of the sequence with set accurace: " << b << std::endl;
	std::cout << "dif: " << dif << std::endl;
}