// StringSum.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum(0);

	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		int count;

		switch (ch)
		{
		case 'a': count = 1;
			sum = sum + count;
			break;
		case 'b': count = 2;
			sum = sum + count;
			break;
		case 'c': count = 3;
			sum = sum + count;
			break;
		case 'd': count = 4;
			sum = sum + count;
			break;
		case 'e': count = 5;
			sum = sum + count;
			break;
		case 'f': count = 6;
			sum = sum + count;
			break;
		case 'g': count = 7;
			sum = sum + count;
			break;
		case 'h': count = 8;
			sum = sum + count;
			break;
		case 'i': count = 9;
			sum = sum + count;
			break;
		case 'j': count = 10;
			sum = sum + count;
			break;
		case 'k': count = 11;
			sum = sum + count;
			break;
		case 'l': count = 12;
			sum = sum + count;
			break;
		case 'm': count = 13;
			sum = sum + count;
			break;
		case 'n': count = 14;
			sum = sum + count;
			break;
		case 'o': count = 15;
			sum = sum + count;
			break;
		case 'p': count = 16;
			sum = sum + count;
			break;
		case 'q': count = 17;
			sum = sum + count;
			break;
		case 'r': count = 18;
			sum = sum + count;
			break;
		case 's': count = 19;
			sum = sum + count;
			break;
		case 't': count = 20;
			sum = sum + count;
			break;
		case 'u': count = 21;
			sum = sum + count;
			break;
		case 'v': count = 22;
			sum = sum + count;
			break;
		case 'w': count = 23;
			sum = sum + count;
			break;
		case 'x': count = 24;
			sum = sum + count;
			break;
		case 'y': count = 25;
			sum = sum + count;
			break;
		case 'z': count = 26;
			sum = sum + count;
			break;
		default:
			break;
		}
	}
	cout << sum << endl;
	return 0;
}

