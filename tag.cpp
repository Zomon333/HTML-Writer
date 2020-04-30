#pragma once
#include "headers.h"
using namespace std;

/*tagType type;
bool ending;
int length;
int index;
string tagContents;
document* ownerFile;*/

tag::tag()
{

}

tag::tag(tagType type, bool ending, int length, int index, string tagContents, document& ownerFile)
{
	setType(type);
	setEnding(ending);
	setLength(length);
	setIndex(index);
	setTagContents(tagContents);
	setOwnerFile(ownerFile);
}

string tag::convertTag()
{
	string result;
	result.append("<");
		if (this->ending)
			result.append("/");
	
	string tagText = "";
	if (getType() == DOCTYPE)
		tagText = "!DOCTYPE";
	if (getType() == HTML)
		tagText = "HTML";
	if (getType() == BR)
		tagText = "BR";
	if (getType() == EM)
		tagText = "EM";
	if (getType() == B)
		tagText = "B";
	if (getType() == UL)
		tagText = "UL";
	if (getType() == LI)
		tagText = "LI";
	if (getType() == HR)
		tagText = "HR";
	if (getType() == H1)
		tagText = "H1";
	if (getType() == H2)
		tagText = "H2";
	if (getType() == H3)
		tagText = "H3";
	if (getType() == H4)
		tagText = "H4";
	if (getType() == H5)
		tagText = "H5";
	if (getType() == H6)
		tagText = "H6";
	if (getType() == P)
		tagText = "P";
	if (getType() == IMG)
		tagText = "IMG";
	if (getType() == TABLE)
		tagText = "TABLE";
	if (getType() == TR)
		tagText = "TR";
	if (getType() == TD)
		tagText = "TD";
	if (getType() == BODY)
		tagText = "BODY";
	if (getType() == HEAD)
		tagText = "HEAD";
	result.append(tagText);
	result.append(">");
	if (!this->ending)
	{
		result.append(this->content);
	}
	return result;
}

/*
DOCTYPE = 0,
	HTML = 1,
	BR = 2,
	EM = 3,
	B = 4,
	UL = 5,
	LI = 6,
	HR = 7,
	H1 = 8,
	H2 = 9,
	H3 = 10,
	H4 = 11,
	H5 = 12,
	H6 = 13,
	P = 14,
	IMG = 15,
	TABLE = 16,
	TR = 17,
	TD = 18,
	BODY = 19,
	HEAD = 20
*/

int tag::getIndex()
{
	return this->index;
}

void tag::setIndex(int nIndex)
{
	this->index = nIndex;
}

tagType tag::getType()
{
	return this->type;
}

void tag::setType(tagType nTag)
{
	this->type = nTag;
}

bool tag::getEnding()
{
	return this->ending;
}

void tag::setEnding(bool nEnding)
{
	this->ending = nEnding;
}

int tag::getLength()
{
	return this->length;
}

void tag::setLength(int nLength)
{
	this->length = nLength;
}

string tag::getTagContents()
{
	return this->tagContents;
}

void tag::setTagContents(string nTagContents)
{
	this->tagContents = nTagContents;
}

tag::~tag()
{
	delete this->ownerFile;
	ownerFile = nullptr;
}

void tag::operator+=(string nContent)
{
	content.append(nContent);
}

bool tag::operator==(tag toCompare)
{
	if (this->content == toCompare.content && this->index == toCompare.index && this->length == toCompare.length)
		return true;
	else
		return false;
}

void tag::setOwnerFile(document& nOwnerFile)
{
	ownerFile = &nOwnerFile;
}

document& tag::getOwnerFile()
{
	return *ownerFile;
}