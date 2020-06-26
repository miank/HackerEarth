// BackToSchool.cpp 

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int ele(0);
	vector<int> v;
	for (int i = 0; i < 3; i++)
	{
		cin >> ele;
		v.push_back(ele);		
	}

	sort(v.begin(), v.end());
	cout << v[2] << endl;

	return 0;
}
