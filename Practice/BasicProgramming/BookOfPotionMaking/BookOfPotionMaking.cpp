// BookOfPotionMaking.cpp 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int strSize = str.length();
	if (strSize < 10)
	{
		cout << "Illegal ISBN" << endl;
		return 0;
	}
	int sum{ 0 };
	for (int i = 0; i < strSize; i++)
	{
		int num = str[i] - '0';
		sum = sum + (num * (i + 1));
	}
	if (sum % 11 == 0)
		cout << "Legal ISBN" << endl;
	else
		cout << "Illegal ISBN" << endl;

	return 0;
}
