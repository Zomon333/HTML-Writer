#pragma once
#include "headers.h"
using namespace std;
class tagGroup : public tag
{
private:
	tag* startTag;
	tag* endTag;
	contentGroup content;
public:
	tagGroup();
	tagGroup(tag& startTag, tag& endTag, string content);
	~tagGroup();

	void setContent(string nContent);
	string getContent();

	tag getTag(bool SF);

	virtual void operator+=(string nContent);
	virtual bool operator==(tagGroup toCompare);

};