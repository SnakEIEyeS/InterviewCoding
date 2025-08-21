#pragma once

#include <iostream>
#include <conio.h>
#include "assert.h"

void revString(char string[])
{
	assert(string);

	//char string = str;

	unsigned int front = 0;
	unsigned int back = 0;
	char temp;

	std::cout << "Received string: " << string << "\n";

	while (string[back] != '\0')
	{
		back++;
	}

	//_getch();

	back--;

	while (front < back && back > 0)
	{
		temp = string[front];
		string[front] = string[back];
		string[back] = temp;

		//if (front > 0)
		front++;
		//if (back > 0)
		back--;
	}

	std::cout << "String after reversing: " << string << "\n";
}