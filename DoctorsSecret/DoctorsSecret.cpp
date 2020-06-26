// DoctorsSecret.cpp 

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int lengthOfBook(0), numberOfPages(0);
	cin >> lengthOfBook;
	cin >> numberOfPages;

	if (lengthOfBook <= 23 && (numberOfPages >= 500 && numberOfPages <= 1000))
	{
		cout << "Take Medicine" << endl;
	}
	else
	{
		cout << "Don't take Medicine" << endl;
	}
	return 0;
}
