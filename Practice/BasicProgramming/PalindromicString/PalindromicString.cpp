// PalindromicString.cpp : check if string is palindrome or not.
// aba = aba

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char str[200];
	cin >> str;
	int flag = 0;
	int length = strlen(str);
	for (int i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		if (str[i] == str[j])
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}

