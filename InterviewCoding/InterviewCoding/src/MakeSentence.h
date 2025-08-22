#pragma once

namespace MakeSentence
{

struct indWords
{
	char* oneWord;
	indWords* nextWord = nullptr;

	indWords(char* iWord);

	indWords()
	{
	}

	~indWords()
	{
	}
};

void MakeSentence();

} // namespace MakeSentence
