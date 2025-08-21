#pragma once
#include <iostream>
#include "assert.h"

void zeroToEnd(unsigned int arr[], size_t arrLength)
{
	assert(arr);
	assert(arrLength);

	std::cout << "Array given:\n";
	for (unsigned int i = 0; i < arrLength;i++)
	{
		std::cout << arr[i] << "\n";
	}
	//size_t arrLength = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Array Length passed to zeroToEnd = " << arrLength << "\n";

	unsigned int numZero = 0;
	unsigned int i = 0;
	for (i = 0; i < 9; i++)
	{
		if (arr[i] == 0)
			numZero++;
	}

	i = 0;
	if (numZero != arrLength)
	{
		while (numZero > 0)
		{
			if (arr[i] == 0)
			{
				for (unsigned int j = i;j < 9;j++)
				{
					arr[j] = arr[j + 1];
				}
				arr[arrLength - 1] = 0;
				numZero--;
			}
			else
				i++;
		}
	}

	std::cout << "Array after zeroToEnd:\n";
	for (unsigned int i = 0; i < arrLength;i++)
	{
		std::cout << arr[i] << "\n";
	}
}