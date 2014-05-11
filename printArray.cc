#include <iostream>      /* printf */
#include <cstdlib>     /* qsort */
#include <string>

int n;
void printArray(int values[], int size)
{
	for (n=0; n<size; n++)  //not sure if sizeof works here. can change if necessary
	{
		std::cout << values[n] << std::endl;
	}
	
}

