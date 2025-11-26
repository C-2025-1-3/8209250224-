#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double X0, X1, a;
	cout << "请输入一个a：";
	cin >> a;
	X0 = a;
	X1 = 0.5* (X0 + a/X0);
	while (fabs(X0 - X1) >= 1e-5);
	{
		X0 = X1;
		X1 = 0.5 * (X0 +a/X0);
	}

	cout << "a的平方根是：" << X1 << endl;
	return 0;




}
