// e-maze-in.cpp 

#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int i{ 0 };
	int j{ 0 };

	int size = str.length();
	for (int k = 0; k < size; k++)
	{
		char ch = str[k];
		if (ch == 'L')
		{
			i--;
		}
		else if (ch == 'R')
		{
			i++;
		}
		else if (ch == 'U')
		{
			j++;
		}
		
		else
		{	
			j--;
		}
	}
	cout << i << " " << j << endl;
}