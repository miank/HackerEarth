// TwoStrings.cpp 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	string s1, s2;
	
	while (t > 0)
	{
		cin >> s1 >> s2;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		cout << (s1 == s2 ? "YES\n" : "NO\n");

		t--;
	}
    return 0;
}

