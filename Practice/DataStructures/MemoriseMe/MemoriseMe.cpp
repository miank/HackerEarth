// MemoriseMe.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n(0), q(0), query(0), count(0), ele(0);
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> ele;
		v.push_back(ele);
	}
	sort(v.begin(), v.end());
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> query;
		for (int i = 0; i < q; i++)
		{
			if (query == v[i])
			{
				count++;
			}
		}
		if (count == 0)
			cout << "NOT PRESENT" << endl;
		else
			cout << count << endl;
		count = 0;
	}		
	return 0;
}

