// SeatingArrangement.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		if (n % 12 == 6)
			cout << n + 1 << " WS" << endl;

		else if (n % 12 == 5)
			cout << n + 3 << " MS" << endl;

		else if (n % 12 == 4)
			cout << n + 5 << " AS" << endl;

		else if (n % 12 == 3)
			cout << n + 7 << " AS" << endl;

		else if (n % 12 == 2)
			cout << n + 9 << " MS" << endl;

		else if (n % 12 == 1)
			cout << n + 11 << " WS" << endl;

		else if (n % 12 == 7)
			cout << n - 1 << " WS" << endl;

		else if (n % 12 == 8)
			cout << n - 3 << " MS" << endl;

		else if (n % 12 == 9)
			cout << n - 5 << " AS" << endl;

		else if (n % 12 == 10)
			cout << n - 7 << " AS" << endl;

		else if (n % 12 == 11)
			cout << n - 9 << " MS" << endl;

		else if (n % 12 == 0)
			cout << n - 11 << " WS" << endl;
	}
}
