#include <iostream>
#include "ZeroToEnd.h"

bool ZeroToEnd_UnitTest()
{
	unsigned int a[] = { 1, 19, 27, 0, 13, 0, 18, 30, 0, 43 };
	unsigned int zeroAlrdyEnd[] = { 1, 19, 27, 13, 18, 30, 43, 0, 0, 0 };
	unsigned int noZero[] = { 1, 19, 27, 2, 13, 3, 18, 30, 1, 43 };
	unsigned int consZero[] = { 1, 19, 27, 0, 0, 0, 18, 30, 1, 43 };
	unsigned int allZero[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	size_t aLength = sizeof(a) / sizeof(a[0]);
	//size_t aLength = *(&a+1) - a;

	zeroToEnd(a, aLength);
	std::cout << "\n";
	zeroToEnd(zeroAlrdyEnd, sizeof(zeroAlrdyEnd) / sizeof(zeroAlrdyEnd[0]));
	std::cout << "\n";
	zeroToEnd(noZero, sizeof(noZero) / sizeof(noZero[0]));
	std::cout << "\n";
	zeroToEnd(consZero, sizeof(consZero) / sizeof(consZero[0]));
	std::cout << "\n";
	zeroToEnd(allZero, sizeof(allZero) / sizeof(allZero[0]));
	std::cout << "\n";

	return true;
}