#pragma once
#include "headers.h"
using namespace std;

tagGroup::tagGroup()
{

}

tagGroup::tagGroup(tag& startTag, tag& endTag, string content)
{
	this->startTag = &startTag;
	this->endTag = &endTag;
	this->setContent(content);
}

tagGroup::~tagGroup()
{
	delete startTag;
	delete endTag;

	startTag = nullptr;
	endTag = nullptr;
}

tag tagGroup::getTag(bool SF)
{
	if (SF == true)
		return *startTag;
	else
		return *endTag;
}

void tagGroup::setContent(string nContent)
{
	this->content.setContent(nContent);
}

string tagGroup::getContent()
{
	return this->content.getContent();
}


void tagGroup::operator+=(string nContent)
{
	this->content.setContent(this->content.getContent() + nContent);
}

bool tagGroup::operator==(tagGroup toCompare)
{
	if (this->startTag == toCompare.startTag && this->endTag == toCompare.endTag && this->content.getContent() == toCompare.content.getContent())
		return true;
	else
		return false;
}
