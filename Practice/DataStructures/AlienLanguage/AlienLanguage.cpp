// AlienLanguage.cpp 

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		string str1, str2;
		cin >> str1 >> str2;
		if (str1.find(str2) != string::npos) 
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
