#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using std::setw;
using std::cout;
using std::endl;
using std::rand;
using std::srand;
using std::time;

// Function Prototype

void selectionSort( int [], int );

int main()
{
	// Given variable and constant declarations
	const int SIZE = 10;
	const int MAXRANGE = 1000;
	int sortThisArray[ SIZE ] = {0};
	time_t t;
	srand((unsigned) time(&t));
	// Fill array with random numbers between 1-1000
	for(int i=0; i<SIZE; i++)
	{
		sortThisArray[ i ] = (rand()%MAXRANGE)+1;// You had const SIZE here, so nothing was being
		                                     // inputted. sortThisArray would go from 0 to 9, no 10
	}
	// Display the unsorted array
	cout << "Unsorted array is:\n";
	for (int i =0; i< SIZE; i++)
	{
		cout << setw(4) << sortThisArray[i];
	}
	cout <<endl;

	// Display the sorted array
	cout << "Sorted array is:\n";
	// Call the sorting array function
	selectionSort(sortThisArray, SIZE );
	{
		for (int j=0; j< SIZE; j++)
			cout << setw(4) << sortThisArray[j];
		cout << endl;
	} // end main

	return 0; // indicates successful termination
} // end main

// Function definition to sort the array
void selectionSort( int array[], int size )
{
	int temp; // temporary variable used for swapping
	int i;
	int j;
	// sort array until only one element is left
	for (i=0; i< size; i++) // You used the const SIZE, which is unknown to the routine, plus
		                    // you were sorting with size - 2 ( < size-1)
	{
		j = i;
		while (j > 0 && (array [j-1] > array [j]))
		{
			temp = array [j];
			array[j] = array [j-1];
			array [j-1] = temp;
			j--;
		}
	}
} // end method selectionSort


