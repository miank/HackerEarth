// LittleJhoolAndPsychicPowers.cpp : HackerEarth

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	bool flag(true);
	int count_zero(0), count_one(0);
	int length = str.length();
	for (int i = 0; i < length; i++)
	{
		if (str[i] == '0')
		{
			count_zero++;
			count_one = 0;
			if (count_zero == 6)
			{
				cout << "Sorry, sorry!"<< endl;
				flag = false;
			}
		}
		if (str[i] == '1')
		{
			count_one++;
			count_zero = 0;
			if (count_one == 6)
			{
				cout << "Sorry, sorry!" << endl;
				flag = false;
			}
		}
	}
	if (flag == true)
	{
		cout << "Good luck!" << endl;
	}
	return 0;
}

