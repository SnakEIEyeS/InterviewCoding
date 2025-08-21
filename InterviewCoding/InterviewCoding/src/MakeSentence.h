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

char* MakeSentence(const char* words[]);

void MakeSentenceRun();

} // namespace MakeSentence
