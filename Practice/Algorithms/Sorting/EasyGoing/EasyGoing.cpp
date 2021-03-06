// EasyGoing.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), m(0), ele(0);
	cin >> t;
	vector<int> v;

	while (t--)
	{
		cin >> n;
		cin >> m;

		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}

		sort(v.begin(), v.end());
		int max_sum(0), min_sum(0);

		for (int i = 0; i < n - m; i++)
		{
			max_sum = max_sum + v[i];
		}
		for (int i = m; i < n; i++)
		{
			min_sum = min_sum + v[i];
		}

		cout << min_sum - max_sum << endl;
	}
	return 0;
}

