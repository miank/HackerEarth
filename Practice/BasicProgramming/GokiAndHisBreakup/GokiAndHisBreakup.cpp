// GokiAndHisBreakup.cpp 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t(0);
	cin >> t;

	int x(0);
	cin >> x;

	while (t--)
	{
		int ele(0);
		cin >> ele;
		if (ele >= x)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
