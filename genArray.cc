#include <cstdlib>
#include <ctime>

void genArray(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() %65535 + 1;
	}

}
