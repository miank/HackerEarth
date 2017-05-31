// DigitProblem.cpp 

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int num(0), digits(0), count(0);
	cin >> num;
	cin >> digits;
	vector<int> vInt;
	vInt.push_back(num);
	
	for (vector<int>::iterator it = vInt.begin(); it != vInt.end(); it++)
	{
		if (count < digits)
		{
			*it = 9;
			count++;
		}
		cout << *it;
	}

    return 0;
}

