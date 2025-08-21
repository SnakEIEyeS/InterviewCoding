#include "assert.h"
#include "ReverseString.h"

bool ReverseString_UnitTest()
{
	char string[] = "sentence";
	revString(string);

	char palindrome[] = "racecar";
	revString(palindrome);

	char notPalindrome[] = "Racecar";
	revString(notPalindrome);

	return true;
}