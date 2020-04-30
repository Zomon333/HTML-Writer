#pragma once
#include "headers.h"
using namespace std;

contentGroup::contentGroup()
{

}

contentGroup::contentGroup(int nStartIndex, int nEndIndex, string content)
{
	setIndex(1, nStartIndex);
	setIndex(2, nEndIndex);
	setContent(content);
}

int contentGroup::getIndex(int SEnd)
{//1 = start, 2 = end
	if (SEnd == 1)
		return this->startIndex;
	else
		return this->endIndex;
}

void contentGroup::setIndex(int SEnd, int newSEnd)
{
	if (SEnd == 1)
		this->startIndex = newSEnd;
	else
		this->endIndex = newSEnd;
}

string contentGroup::getContent()
{
	return this->content;
}

void contentGroup::setContent(string nContent)
{
	this->content = nContent;
}