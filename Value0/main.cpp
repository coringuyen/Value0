#include <iostream>
#include "ZeroValue.h"

int main()
{
	ZeroValue zero;
	int num[10] = {2,0,2,3,4,64,98,0,2,0};
	int num2[10] = { 0,2,3,4,0,64,98,0,2,0};
	int num3[10] = { 2,0,2,3,4,64,0,98,0,2};
	int num4[10] = { 2,2,3,4,64,0,0,0,98,2 };

	zero.SolutionSpeed();
	//zero.Solution(num, 10);
	//zero.Solution(num2, 10);
	//zero.Solution(num3, 10);
	zero.Solution(num4, 10);

	system("Pause");
	return 0;
}