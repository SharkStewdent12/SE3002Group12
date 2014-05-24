#include <iostream>
#include <cstdlib>   



int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void quickSort(int tosort[], int size)
{	
	qsort (tosort, size, sizeof(int), compare);
	return;
}
