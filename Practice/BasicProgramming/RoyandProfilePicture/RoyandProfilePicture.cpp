// RoyandProfilePicture.cpp 
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int L, W, H;
	int N;
	cin >> L;
	int size = L * L;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> W >> H;
		if (W < L || H < L)
			cout << "UPLOAD ANOTHER" << endl;
		else if (W == H)
			cout << "ACCEPTED" << endl;
		else if (size >= (W * H))
			cout << "ACCEPTED" << endl;
		else
			cout << "CROP IT" << endl;
	}
	return 0;
}

