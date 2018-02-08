// RestInPeace-21-1.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0);
	vector<int> v;
	vector<int>::iterator ptr;
	cin >> t;

	while (t--)
	{
		cin >> n;
		if (n % 21 == 0)
		{
			cout << "The streak is broken!" << endl;
			continue;
		}
		else
		{
			int l = 0, p = 0;
			while (n > 0)
			{
				int r = n % 10;
				n = n / 10;
				if (r == 2 && l == 1)
				{
					p = 1;
					break;
				}
				l = r;
			}
			if (!p)
				cout << "The streak lives still in our heart!" << endl;
			else
				cout << "The streak is broken!" << endl;

		}
	}
	return 0;
}

