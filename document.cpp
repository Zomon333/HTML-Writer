#pragma once
#include "document.h"

document::document()
{
	string content = "<!DOCTYPE HTML><HTML>";

}

string document::getDocumentContent()
{
	return content;

}

void document::setDocumentContent(string nContent)
{
	content = nContent;

}