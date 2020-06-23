// AllVowels.cpp

#include "pch.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n(0);
	cin >> n;
	string str;
	cin >> str;

	if (str.length() <= n)
	{
		map<char, int> m1;

		for (int i = 0; i < n; i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				m1[str[i]]++;
			}
		}

		int cnt = 0;
		for (auto i : m1)
		{
			if (i.second > 0)
			{
				cnt++;
			}
		}

		if (cnt == 5)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}

