// PrimeNumber.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), isPrime(0);
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		isPrime = 0;
		for (int j = 2; j <= i/2; j++)
		{
			if (i % j == 0)
			{
				isPrime = 1;
				break;
			}
		}
		if (isPrime == 0 && n != 1)
			cout << i << " ";
	}
	return 0;
}

