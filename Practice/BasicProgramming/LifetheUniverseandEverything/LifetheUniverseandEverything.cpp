// LifetheUniverseandEverything.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n(0);
	vector<int> v1;
	vector<int>::iterator it;

	while (cin >> n)
		v1.push_back(n);

	for (it = v1.begin(); it != v1.end(); it++)
	{
		if (*it == 42)
			break;
		else
			cout << *it << endl;
	}
	return 0;
}

