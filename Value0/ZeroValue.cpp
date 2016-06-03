#include "ZeroValue.h"

void ZeroValue::Solution(int input[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (input[i] == 0)
		{
			for (int j = i + 1; j < length; ++j)
			{
				int t = input[j];
				input[j] = input[j - 1];
				input[j - 1] = t;
				//printArray(input, length);
			}
		}
	}

	if (solutionSpeed)
	{
		printArray(input, length);
	}
}

void ZeroValue::SolutionSpeed()
{
	solutionSpeed = true;
}

void ZeroValue::printArray(int input[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (i == length - 1)
		{
			std::cout << input[i] << std::endl;
		}
		else
			std::cout << input[i] << " ";
	}
}