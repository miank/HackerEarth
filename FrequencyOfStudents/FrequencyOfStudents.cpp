// FrequencyOfStudents.cpp 

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	string str;
	map<string, int> m1;

	while (t--)
	{
		cin >> str;
		m1[str]++;
	}

	for (auto i : m1)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}

