// ArrayInsert.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), q(0), input(0), x(0), y(0), l(0), r(0);
	cin >> n;
	cin >> q;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	while (q > 0)
	{
		cin >> input;
		if (input == 1)
		{
			cin >> x;
			cin >> y;
			arr[x] = y;
		}
		else
		{
			cin >> l;
			cin >> r;
			long long int sum(0);
			for (int i = l; i <= r; i++)
			{
				sum = sum + arr[i];
			}
			cout << sum << endl;
		}
		q--;
	}
    return 0;
}

