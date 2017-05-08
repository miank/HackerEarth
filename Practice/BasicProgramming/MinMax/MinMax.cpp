// MinMax.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), min(0), max(0);
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	max = min = arr[0];
	
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		else
		{
			if (min > arr[i])
			{
				min = arr[i];
			}
		}
	}
	cout << max;
	cout << min;
	int count(0);
	for (int i = min; i <= max; i++)
	{
		int ele = i;
		for (int i = min; i <= max; i++)
		{
			if (ele == arr[i])
				count++;
		}
	}
	if (count == n)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
    return 0;
}
