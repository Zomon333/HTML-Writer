#pragma once
#include "headers.h"
using namespace std;

string parseChartoString(char* charArray, int arrayLength)
{
	int i = 0;
	string* result = new string(charArray);
	return *result;
}
int main()
{
	fstream log;
	string logName = "log.txt";
	cout << "Clearing previous log file.";
	
	string A;
	string option = "";
	option = "index";
	cout << endl;
	
	log.open("log.txt");
	fstream webPage;
	string fileName = option;
	fileName.append(".txt");

	webPage.open(fileName);
	bool hasOpened = webPage.is_open();

	webPage.close();
	
	log << fileName<<" has been opened status is "<<hasOpened;
	
	webPage.open(fileName);
	
	char option2[2000];

	document baseDocument;
	tag* docArray[500];
	
	int j = 0;
	while (j < 500)
	{
		docArray[j] = new tag(P, false, 0, j, "", baseDocument);
		j++;
	}

	docArray[0] = new tag(DOCTYPE, false, 0, 0, "", baseDocument);
	docArray[1] = new tag(HTML, false, 0, 1, "", baseDocument);
	docArray[2] = new tag(HEAD, false, 0, 2, "", baseDocument);
	docArray[3] = new tag(HEAD, true, 0, 3, "", baseDocument);
	docArray[4] = new tag(BODY, false, 0, 4, "", baseDocument);
	int index = 5;
	bool menu = true;

	while (menu && index < 499)
	{
		cout << "\nUse help for commands, or input a command: ";
		cin >> option;
		if (option == "help")
		{
			cout << "\nEnter - adds a line break\nItalics - prompts italic text\nBold - prompts bold text\nRule - a horizontal line\nLargest - prompts text for largest heading available";
			cout << "\nLarge - prompts text for second largest heading available\nNormal - prompts text for average size heading\nSmaller - prompts text for smaller than average heading\nSmallest - prompts text for smallest heading ever";
			cout << "\nParagraph - prompts text for a generic paragraph of text\nTableS - starts a table\nTableE - ends a table\nCell - prompts text for new table cell\nRow - prompts text for new table row\nQuit - Stops webpage crafting";
		}
		if (option == "Enter")
		{
			docArray[index] = new tag(BR, false, 0, index, "", baseDocument);
			index++;
			docArray[index] = new tag(BR, true, 0, index, "", baseDocument);
			index++;

			webPage.close();
			
			log << "LineBreak has been used.\n";
			
			webPage.open(fileName);
		}
		if (option == "Italics")
		{
			docArray[index] = new tag(EM, false, 0, index, "", baseDocument);
			index++;

			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;

			webPage.close();
			
			log << "Italics has been used.\n";
			
			webPage.open(fileName);
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(BR, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Bold")
		{
			docArray[index] = new tag(B, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			webPage.close();
			
			log << "Bold has been used.\n";
			
			webPage.open(fileName);
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(B, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Rule")
		{
			webPage.close();
			
			log << "Horizontal rule has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(HR, false, 0, index, "", baseDocument);
			index++;
			option = "";
			docArray[index] = new tag(HR, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Largest")
		{
			webPage.close();
			
			log << "H1 header has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(H1, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(H1, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Large")
		{
			webPage.close();
			
			log << "H2 header has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(H2, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(H2, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Normal")
		{
			webPage.close();
			
			log << "H3 header has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(H3, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(H3, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Smaller")
		{
			webPage.close();
			
			log << "H4 header has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(H4, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(H4, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Smallest")
		{
			webPage.close();
			
			log << "H5 has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(H5, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(H5, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Paragraph")
		{
			webPage.close();
			
			log << "Paragraph has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(EM, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(BR, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "TableS")
		{
			webPage.close();
			
			log << "TableStart has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(TABLE, false, 0, index, "", baseDocument);
			index++;
			option = "";

		}
		if (option == "TableE")
		{
			webPage.close();
			
			log << "TableEnd has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(TABLE, true, 0, index, "", baseDocument);
			index++;
			option = "";
		}
		if (option == "Cell")
		{
			webPage.close();
			
			log << "TableCell has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(TD, false, 0, index, "", baseDocument);
			index++;
			cout << "\nPreferred text: ";
			cin >> A;
			getline(cin, option);
			A.append(option);
			option = A;
			cout << "\n";
			docArray[index - 1]->content = option;
			option = "";
			docArray[index] = new tag(TD, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Row")
		{
			webPage.close();
			
			log << "TableRow has been used.\n";
			
			webPage.open(fileName);
			docArray[index] = new tag(TR, false, 0, index, "", baseDocument);
			index++;
			option = "";
			docArray[index] = new tag(TR, true, 0, index, "", baseDocument);
			index++;
		}
		if (option == "Quit")
		{
			webPage.close();
			
			log << "Quitting program.\n";
			
			webPage.open(fileName);
			menu = false;
		}
	}
	docArray[498] = new tag(BODY, true, 0, 498, "", baseDocument);
	docArray[499] = new tag(HTML, true, 0, 499, "", baseDocument);

	int i = 0;
	while (i < 500)
	{
		//cout << docArray[i]->convertTag();
		if(i!=0 && docArray[i-1]->convertTag() != docArray[i]->convertTag())
		baseDocument.content.append(docArray[i]->convertTag());
		i++;
	}
	cout << "\n\n\nDocument: ";
	cout << baseDocument.content;
	log << baseDocument.content;

	webPage.close();

	webPage.open(fileName);
	webPage << baseDocument.content;

	
	log << "Closing log.\n";
	log.close();
	return 1;
}
