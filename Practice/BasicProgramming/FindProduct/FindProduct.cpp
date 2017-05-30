// FindProduct.cpp 

#define BASE_MODULE 1000000007
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long int n(0), answer(1);
	long long int mod = pow(10, 9) + 7;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		answer = (answer * arr[i]) % mod;
	}
	cout << answer << endl;
    return 0;
}

