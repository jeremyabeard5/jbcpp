//============================================================================
// Name        : CSV_Sandbox.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void ParseCSV(const string& csvSource, vector<vector<string> >& lines);

int main() {
//	vector<vector<string>> test{ {"yo1","yo2","yo3"},
//		{"yo4", "yo5", "yo6"}};
	vector<vector<string>> test{{}};
/*	for (int i = 0; i < test.size(); i++)
		{
			for (int j = 0; j < test[i].size(); j++)
			{
				cout << test[i][j] << endl;
			}
		}*/
	const string filename("Webbings.csv");
	ParseCSV(filename, test);

	return 0;
}

void ParseCSV(const string& csvSource, vector<vector<string> >& lines)
{
	bool inQuote(false);
	bool newLine(false);
	string field;
	lines.clear();
	vector<string> line;

	string::const_iterator aChar = csvSource.begin();
	while (aChar != csvSource.end())
	{
		switch (*aChar)
		{
		case '"':
			newLine = false;
			inQuote = !inQuote;
			break;

		case ',':
			newLine = false;
			if (inQuote == true)
			{
				field += *aChar;
			}
			else
			{
				line.push_back(field);
				field.clear();
			}
			break;

		case '\n':
		case '\r':
			if (inQuote == true)
			{
				field += *aChar;
			}
			else
			{
				if (newLine == false)
				{
					line.push_back(field);
					lines.push_back(line);
					field.clear();
					line.clear();
					newLine = true;
				}
			}
			break;

		default:
			newLine = false;
			field.push_back(*aChar);
			break;
		}

		aChar++;
	}

	if (field.size())
		line.push_back(field);

	if (lines.size())
		lines.push_back(line);
}

