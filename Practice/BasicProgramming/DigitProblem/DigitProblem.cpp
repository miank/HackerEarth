#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	string str;
	cin >> str >> num;
	
	while (num != 0)
	{
		for (int i = 0; i<str.length(); i++)
		{
			if (str[i]<'9')
			{
				str[i] = '9';
				break;
			}
		}
		num--;
	}
	cout << str << endl;
}