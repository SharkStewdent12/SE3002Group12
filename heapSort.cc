#include <assert.h>

void shiftRight(int * arr, int low, int high)
{
	int root = low;
	while ((root*2)+1 <= high)
	{
		int leftChild = (root * 2 ) +1;
		int rightChild = leftChild + 1;
		int swapIdx = root;
		if (arr[swapIdx] < arr[leftChild])
		{
			swapIdx = leftChild;
		}
		if ((rightChild <= high) && (arr[swapIdx] < arr[rightChild]))
		{
			swapIdx = rightChild;
		}
		if (swapIdx != root )
		{
			int tmp = arr[root];
			arr[root] = arr[swapIdx];
			arr[swapIdx] = tmp;
			root = swapIdx;
		}
		else
		{
			break;
		}
	}
	return;
}


void heap(int* arr, int low, int high)
{
	int midIdx = (high - low -1)/2;
	while (midIdx >= 0)
	{
		shiftRight(arr, midIdx, high);
		--midIdx;
	}
	return;
}

void heapSort(int* arr, int size)
{
	assert(arr);
	assert(size > 0);
	heap(arr, 0, size-1);
	int high = size -1;
	while (high > 0)
	{
		int tmp = arr[high];
		arr[high] = arr[0];
		arr[0] = tmp;
		--high;
		shiftRight(arr, 0, high);
	}
	return;
}

/*

Taken from :

http://crackprogramming.blogspot.com/2012/11/heap-sort-c-implementation.html

*/
