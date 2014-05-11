#include <iostream>
#include <cstdlib>   



int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

void quickSort(int tosort[])
{	
	qsort (tosort, sizeof(tosort), sizeof(int), compare);
	return;
}
