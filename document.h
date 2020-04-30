#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
class document
{
public:
	string content;

	document();
	string getDocumentContent();
	void setDocumentContent(string nContent);
};