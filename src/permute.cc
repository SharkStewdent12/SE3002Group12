#include <iostream>
//#include <array>
#include <ctime>
#include <time.h>
#include <math.h>
#include <cstdlib>

void permuteArray(int Given[], int size)
{
	int i;
	int j;
	int temp;
	srand(time(NULL));
	for(i = size -1 ; i>0; i--)
	{
		j = rand() %i;
		
		temp = Given[j];
		Given[j] = Given[i];
		Given[i] = temp;
	}
	return;
}


