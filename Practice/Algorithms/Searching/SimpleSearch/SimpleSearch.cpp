// SimpleSearch.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n(0), ele(0);
	cin >> n;
	int *arr = new int[n];
					 
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> ele;

	for (int i = 0; i < n; i++)
	{
		if (ele == arr[i])
			cout << i << endl;
	}

    return 0;
}

