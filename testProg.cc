#include <iostream>
#include <typeinfo>
#include <time.h>
#include <ctime>
#include <string>
#include <exception>
#include "genArray.h"
#include "permute.h"
#include "quickSort.h"
#include "bubbleSort.h"
#include "heapSort.h"
#include "printArray.h"
using namespace std;

void testProg();
void timing();
clock_t t1, t2, t3;
clock_t qSort;
clock_t hSort;
clock_t bSort;


int main(int argc, char *args[])
{
	testProg();
	timing();
	return 0;
}

void testProg()
{
	int n;
	try
	{
		cout << "===================================== Test Prog =============================" << endl;
		cout << endl;
		
		cout << "Please enter the size of the array to be generated:" << endl;
		cin >> n;
	
		int array[n];

		cout << "Generating Array..." << endl;
		genArray(array, n);
		cout << endl;
		cout << "Array = " << endl;
		printArray(array, n);
		cout << endl;

		// quick sort and printing quick sort
		cout << "Testing quickSort..." << endl;
		t1 = clock();
		quickSort(array);
		qSort = clock() - t1;
		cout << "quickSort functional." << endl;
		cout << endl;
		cout << "Sorted Array = " << endl;
		printArray(array, n);
		cout << endl;

		//permute before heap sort
		cout << "Testing permuteArray..." << endl;
		permuteArray(array, n);
		cout << "Permutation successful. " << endl;
		cout << endl;
		cout << "Array = " << endl;
		printArray(array, n);
		cout << endl;

		//heap sort 
		cout << "Testing heapSort... " << endl;
		t2 = clock();
		heapSort(array, n);
		hSort = clock() -t2;
		cout << "heapSort functional." << endl;
		cout <<endl;
		
		cout << endl;
                cout << "Sorted Array = " << endl;
                printArray(array, n);
		cout << endl;

		// permute array before bubble sort
                cout << "Permuting Array." << endl;
                permuteArray(array, n);
                cout << "Permutation successful. " << endl;
		cout << endl;
		cout << "Array = " << endl;
		printArray(array, n);
		cout << endl;
            
		//bubble sort
		cout << "Testing bubbleSort... " << endl;
		t3 = clock();
		bubbleSort(array, n);
		bSort = clock() - t3;
                cout << "bubbleSort functional." << endl;
		cout << endl;
                cout << "Sorted Array = " << endl;
                printArray(array, n);
		cout << endl;
	}
	catch (exception& e)
	{
		cerr << "Error: " << e.what() << endl;
	}
	return;
}

void timing()
{
	cout << "-----------------------------Timing-------------------------------" << endl;
	cout << "N = " << "" << endl;
	cout << endl;
	cout << "quickSort = " << (double)qSort/(double)(CLOCKS_PER_SEC/1000) << "ms" << endl;
	cout << "heapSort = " << (double)hSort/(double)(CLOCKS_PER_SEC/1000) << "ms" << endl;
	cout << "bubbleSort = " << (double)bSort/(double)(CLOCKS_PER_SEC/1000) << "ms" << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << endl << "=============================================================================" << endl;
	return;
}
