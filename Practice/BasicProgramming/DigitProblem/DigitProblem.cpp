// DigitProblem.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	long long int num(0), digits(0);
	cin >> num;
	cin >> digits;
	vector<long long int> vInt;

	while (num != 0)
	{
		long long int r = num % 10;
		long long int q = num / 10;
		vInt.push_back(r);
		num = q;
	}
	while (digits > 0)
	{
		long long int num = vInt.back();
		num = 9;
		cout << num;
		vInt.pop_back();
		digits--;
	}
	while (!vInt.empty())
	{
		cout << vInt.back();
		vInt.pop_back();
	}
	cout << endl;

	return 0;
}
