#pragma once
#include "headers.h"
using namespace std;

class tag : public document
{
private:
	tagType type;
	bool ending;
	int length;
	int index;
	string tagContents;
	document* ownerFile;
public:
	tag();
	tag(tagType type, bool ending, int length, int index, string tagContents, document& ownerFile);
	~tag();

	virtual void operator+=(string nContent);
	virtual bool operator==(tag toCompare);

	string convertTag();

	int getIndex();
	void setIndex(int nIndex);

	tagType getType();
	void setType(tagType nTag);

	bool getEnding();
	void setEnding(bool nEnding);

	int getLength();
	void setLength(int nLength);

	string getTagContents();
	void setTagContents(string nTagContents);

	void setOwnerFile(document& nOwnerFile);
	document& getOwnerFile();
};
