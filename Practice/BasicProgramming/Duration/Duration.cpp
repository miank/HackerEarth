// Duration.cpp 

#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	while (t--)
	{
		int sHour(0); 
		int sMin(0);
		int eHour(0);
		int eMin(0);

		cin >> sHour >> sMin >> eHour >> eMin;
		int startTotalMin = (sHour * 60) + sMin;
		int endTotalMin = (eHour * 60) + eMin;
		int timeInMinutes = endTotalMin - startTotalMin;
		int hour = timeInMinutes / 60;
		int min = timeInMinutes % 60;
		cout << hour << " " << min;
		cout << endl;
	}

}

