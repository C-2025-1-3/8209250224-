#include<iostream>
using namespace std;
int main()
{
	double X, Y;
	cout << "ÇëÊäÈëXµÄÖµ£º";
	cin >> X;
	if (X > 0 && X < 1)


		Y = 3 - 2 * X;

	else if (X >= 1 && X < 5)
		Y = 1 + 1 / (2 * X);
	else if (X >= 5 && X < 10)
		Y = X * X;
	cout << Y;
	return 0;
}

