// WhiteSpace.cpp - HackerEarth

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int count(0);
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}
	cout << count << endl;

    return 0;
}

