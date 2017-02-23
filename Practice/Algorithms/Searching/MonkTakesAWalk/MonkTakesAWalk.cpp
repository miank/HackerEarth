// MonkTakesAWalk.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	string str;
	int count(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		count = 0;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
			{
				count++;
			}
		}
		cout << count << endl;
	}
    return 0;
}

