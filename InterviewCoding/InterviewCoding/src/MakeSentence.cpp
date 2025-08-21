#include "MakeSentence.h"

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#else
#include <stdlib.h>
#endif // _DEBUG
#include "conio.h"
#include <stdio.h>
#include <iostream>
#include "assert.h"

namespace MakeSentence
{

indWords::indWords(char* iWord)
{
	assert(iWord != nullptr);
	oneWord = iWord;
}

char * MakeSentence(const char * words[])
{
	assert(words != nullptr);
	int i = 0, j = 0, k = 0, sentsize = 0;

	while (words[i] != nullptr)
	{
		if (*(words[i] + j) == '\0')
		{
			j = 0;
			i++;
			sentsize++;
		}
		else
		{
			j++;
			sentsize++;
		}
	}

	i = 0;
	char * sentenceret = (char *)malloc((sentsize + 1) * sizeof(char));
	char * sentence = sentenceret;
	while (words[i] != nullptr)
	{
		if (*(words[i] + j) == '\0')
		{
			sentence[k] = ' ';
			i++;
			j = 0;
		}
		else
		{
			sentence[k] = (char)(*(words[i] + j));
			j++;
		}
		k++;
	}
	sentence[k - 1] = '.';
	sentence[k] = '\0';

	return sentence;
}

void MakeSentenceRun()
{
	char * pSentence;

	const size_t ipLength = 250;
	struct indWords * pWordColl = nullptr;
	struct indWords * prevWord = nullptr;
	size_t nWords = 0;
	char * ipWord;

	char * outword;

	std::cout << "Enter the words of a sentence. Press only Return to end input:\n";
	while (true)
	{
		ipWord = new char[ipLength];
		gets_s(ipWord, ipLength);

		if (ipWord[0] == '\0')
			break;
		else
		{
			prevWord = pWordColl;

			pWordColl = new indWords(ipWord);


			pWordColl->nextWord = prevWord;

			nWords++;
		}
	}

	delete[] ipWord;

	if (nWords != 0)
	{
		const char ** wordList = new const char *[nWords + 1];
		wordList[nWords] = nullptr;

		while (pWordColl && nWords)
		{
			outword = pWordColl->oneWord;
			assert(pWordColl->oneWord != " ");
			--nWords;
			wordList[nWords] = pWordColl->oneWord;
			prevWord = pWordColl;
			pWordColl = pWordColl->nextWord;
			delete prevWord;
		}

		pSentence = MakeSentence(wordList);
		assert(pSentence != nullptr);

		printf("The Sentence is: %s", pSentence);

		int delword = 0;
		while (wordList[delword] != nullptr)
			delete (char *)(wordList[delword++]);

		delete[] wordList;

		free(pSentence);
	}

#if defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif // _DEBUG
}

} // namespace MakeSentence
