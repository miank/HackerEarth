// MonkAndLuckyMinimum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int testCase(0), min(0), count(0);;
	cin >> testCase;
	int size(0);
	int *arr;
	for (int i = 0; i < testCase; i++)
	{
		count = 0;
		cin >> size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		min = arr[0];
		for (int i = 1; i < size; i++)
		{			
			if (min > arr[i])
			{
				min = arr[i];
			}
		}
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == min)
				count++;
		}
		if (count % 2 != 0)
		{
			cout << "Lucky" << endl;
		}
		else
		{
			cout << "Unlucky" << endl;
		}
	}
	return 0;
}

