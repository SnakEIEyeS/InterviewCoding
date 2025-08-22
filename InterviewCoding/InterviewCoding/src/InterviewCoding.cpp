#include "InterviewCoding.h"


/*
1. Place all zeroes in an array of integers at the end of the array
2. Reverse a string in place
*/

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#endif // _DEBUG
#include <iostream>
#include <conio.h>
#include "assert.h"

#include "MakeSentence.h"

extern bool ZeroToEnd_UnitTest();
extern bool ReverseString_UnitTest();

void InterviewCoding()
{
	ZeroToEnd_UnitTest();
	std::cout << std::endl;

	ReverseString_UnitTest();
	std::cout << std::endl;

	MakeSentence::MakeSentence();
	std::cout << std::endl;

	_getch();

#if defined(_DEBUG)
	assert(!_CrtDumpMemoryLeaks());
#endif // _DEBUG

}
