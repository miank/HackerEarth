// FindThePattern.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n(0);
	cin >> n;
	vector<long long int> v;
	for (int i = 0; i < n; i++)
	{
		long long int ele(0);
		cin >> ele;
		v.push_back(ele);
	}

	sort(v.begin(), v.end());
	cout << v[0] + v[n - 1] << endl;

}


