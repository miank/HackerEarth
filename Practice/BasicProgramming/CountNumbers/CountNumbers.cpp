// CountNumbers.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strArr[10000], ch;
	int t(0), n(0), count(0);
	cin >> t;
	while (t > 0)
	{
		cin >> n;
		count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> strArr[i];
		}
		for (int i = 0; i < n; i++)
		{
			string ch = strArr[i];
			/*int a = atoi(ch.c_str());*/
			if (strArr[i] >= "0" && strArr[i] <= "9")
			{
				count++;
			}
		}
		cout << "count is " << count;
		t--;
	}
    return 0;
}

