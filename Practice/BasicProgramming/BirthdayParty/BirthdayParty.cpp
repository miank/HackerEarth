// BirthdayParty.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	int n(0), m(0);
	cin >> t;

	while (t > 0)
	{
		cin >> n >> m;
		if (m % n == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		t--;
	}
    return 0;
}

