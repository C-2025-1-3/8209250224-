#include<iostream>
using namespace std;
int main()
{
	float a, b, c, sum;

	cout << "请输入三边长：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		sum = a + b + c;
		cout << "周长是：" << sum << endl;

		if (a == b || b == c || a == c)
		{
			cout << "是等腰三角形";
		}
		else
		{
			cout << "不是等腰三角形";
		}
	}
	else
	{
		cout << "构成不了三角形";
	}
	return 0;

}