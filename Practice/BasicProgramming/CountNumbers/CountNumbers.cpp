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
		//count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> strArr[i];
		}
		for (int i = 0; i < n; i++)
		{
			string ch = strArr[i];
			if (strArr[i] >= "0" && strArr[i] <= "99999")
			{
				count++;
			}
		}
		cout << count;
		t--;
	}
    return 0;
}

