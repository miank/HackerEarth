// IsItPossible.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long long int t(0), n(0);
	cin >> t;

	while (t > 0)
	{
		cin >> n;
		if (n % 2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		t--;
	}
	return 0;
}

