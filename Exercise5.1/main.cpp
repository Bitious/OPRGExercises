#include <iostream>
#include <cstdlib>
#include <time.h>

int getRandomNumber();

int main(void)
{
	srand(time(0));

	int randomNumbers[20] = { 0 };
	int randomNumbersLength = sizeof(randomNumbers) / sizeof(randomNumbers[0]); // Calculate array element count
	int negativeNumberCount = 0;

	printf("There is %d elements in the array\n", randomNumbersLength);

	puts("Numbers in array: ");
	// Generate random numbers for array
	for (int i = 0; i < randomNumbersLength; i++)
	{
		int newRandomNumber = getRandomNumber();
		randomNumbers[i] = newRandomNumber;

		printf("#%02d: %3d\n", i, randomNumbers[i]); // Print out the number for the current element
	}

	// Count the negative numbers in the array
	for (int i = 0; i < randomNumbersLength; i++)
	{
		if (randomNumbers[i] < 0)
			negativeNumberCount++;
	}

	puts("****");
	printf("Total Number of negative numbers in array: %d\n", negativeNumberCount);
}

// Get a random number between -50 and 50
int getRandomNumber()
{
	return rand() % (101) - 50;
}