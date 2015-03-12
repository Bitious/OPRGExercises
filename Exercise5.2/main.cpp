//========================================================================================================
// FILENAME  : main.cpp
// CREATED   : 13-03-2015 - 00:00
// AUTHOR    : Bitious
// DESCR     : This is a small program which will use an optimized bubble sort to sort an array of randomly generated numbers
//
//--------------------------------------------------------------------------------------------------------
//
// NO REVISIONS
//
//========================================================================================================
#include <iostream>
#include <time.h>
#include <cstdlib>

int getRandomNumber();

int main(void)
{
	srand(time(0));

	int sortingArray[10] = { 0 };
	int sortingArrayLength = sizeof(sortingArray) / sizeof(sortingArray[0]); // Calculate array element count

	// Generate random numbers for array
	printf("Unsorted numbers:");
	for (int i = 0; i < sortingArrayLength; i++)
	{
		int newRandomNumber = getRandomNumber();
		sortingArray[i] = newRandomNumber;

		printf("% 3d", sortingArray[i]); // Print out the number for the current element
	}

	// Sort arrray from smallest to largest (use of optimized bubble sort)
	int n = sortingArrayLength;
	do
	{

		int newn = 0;
		for (int i = 1; i <= n - 1; i++)
		{

			if (sortingArray[i - 1] > sortingArray[i])
			{
				int temp = sortingArray[i - 1];
				sortingArray[i - 1] = sortingArray[i];
				sortingArray[i] = temp;
				newn = i;
			}

		}
		n = newn;

	} while (n != 0);

	puts("");
	printf("Sorted numbers:");
	for (int i = 0; i < sortingArrayLength; i++)
	{
		printf("% 3d", sortingArray[i]); // Print out the number for the current element
	}

	return 0;
}

// Get a random number between -50 and 50
int getRandomNumber()
{
	return rand() % (101);
}