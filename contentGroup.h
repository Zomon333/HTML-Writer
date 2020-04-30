#pragma once
#include "headers.h"
using namespace std;

class contentGroup
{
private:
	int startIndex;
	int endIndex;
	string content;
public:
	contentGroup();
	contentGroup(int nStartIndex, int nEndIndex, string content);

	int getIndex(int SEnd);
	void setIndex(int SEnd, int newSEnd);

	string getContent();
	void setContent(string nContent);
};