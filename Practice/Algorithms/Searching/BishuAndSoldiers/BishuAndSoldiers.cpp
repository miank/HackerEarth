// BishuAndSoldiers.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long n(0), ele(0);
	cin >> n;
	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	int t(0);
	cin >> t;

	while (t > 0)
	{
		long m(0), k(0);
		long sum(0);
		cin >> m;

		for (int i = 0; i < n; i++)
		{
			if (v[i] <= m)
			{
				k++;
				sum = sum + v[i];
			}
		}
		cout << k << " " << sum << endl;
		t--;
	}	
    return 0;
}

