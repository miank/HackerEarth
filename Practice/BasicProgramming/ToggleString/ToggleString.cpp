// ToggleString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[20];
	int i;
	cout << "Enter the String : ";
	cin >> str;
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 92)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	cout << "\nThe String is = " << str;
}



