// ArraySum.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0);
	long long num, sum(0);
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> num;
		sum = sum + num;
	}

	cout << sum << endl;
    return 0;
}

