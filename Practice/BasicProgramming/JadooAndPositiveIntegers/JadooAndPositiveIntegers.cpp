// JadooAndPositiveIntegers.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	int sum(0);
	signed int n(0);
	while (t--)
	{
		cin >> n;
		if (n > 0)
		{
			sum += n;
		}
	}
	cout << sum << endl;
	return 0;
}

