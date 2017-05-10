// FindTheMultiples.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), count(0);
	long num(0);
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> num;
		if (num % 3 == 0)
		{
			count++;
		}
		else
			continue;
	}
	cout << count;
    return 0;
}

