// WhatIsTheStringMadeOf.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int count(0);
	int sum(0);
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		
		switch (ch)
		{
		case '0': count = 6;
			break;
		case '1': count = 2;
			break;
		case '2': count = 5;
			break;
		case '3': count = 5;
			break;
		case '4': count = 4;
			break;
		case '5': count = 5;
			break;
		case '6': count = 6;
			break;
		case '7': count = 3;
			break;
		case '8': count = 7;
			break;
		case '9': count = 6;
			break;
		default:
			break;
		}
		sum += count;
	}
	cout << sum << endl;
	return 0;
}

