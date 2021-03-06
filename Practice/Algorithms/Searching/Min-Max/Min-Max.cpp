// Min-Max.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n(0), ele(0);
	vector<long> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}

	sort(v.begin(), v.end());
	long min_sum(0), max_sum(0);

	for (int i = 0; i < n - 1; i++)
	{
		max_sum += v[i]; 
	}

	for (int i = 1; i < n; i++)
	{
		min_sum += v[i];
	}

	cout << max_sum << " " << min_sum << endl;
    return 0;
}

