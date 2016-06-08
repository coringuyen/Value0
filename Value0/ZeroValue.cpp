#include "ZeroValue.h"

void ZeroValue::printArray(int input[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (i == length - 1)
			std::cout << input[i] << std::endl;
		std::cout << input[i] << " ";
	}
}

void ZeroValue::Solution(int input[], int length, bool isSpeed)
{
	for (int i = 0; i < length; ++i) // loop through the array
	{
		if (input[i] == 0) // if this element is 0
		{
			for (int j = i + 1; j < length; ++j) // loop through the array from where the 0 that is found locate
			{
				// swaping the current element with the next element
				int t = input[j];
				input[j] = input[j - 1];
				input[j - 1] = t;
				//printArray(input, length);
			}
		}
	}

	if (isSpeed)
	{
		printArray(input, length);
	}
}

void ZeroValue::Solution2(int input[], int length, bool isSpeed)
{
	for (int i = 0; i < length; ++i)// loop through the array
	{
		if (input[i] == 0) // if this element is 0
		{
			bool isDone = true; // use for the while loop
			int count = 1; // this is use to go to the next element in the array
			while (isDone)
			{
				if (input[i + count] > 0) // if this number on the list is bigger than 0  
				{
					// swap 0 with this number that bigger than 0
					int t = input[i];
					input[i] = input[i + count];
					input[i + count] = t;
					isDone = false; // isDone is false so the while loop should stop 
				}
				// this is to break out when its reach to the end of the array and couldn't find any number that bigger than 0
				if (count == length - 1) 
					isDone = false;
				count++; // increase count to the next element if the current one is not bigger than 0
			}
		}
	}

	if (isSpeed)
		printArray(input, length);
}
