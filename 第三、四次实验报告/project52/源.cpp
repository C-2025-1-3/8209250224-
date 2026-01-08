#include<iostream>
using namespace std;
void gcd_lcm(int m, int n, int& gcd_result, int& lcm_result)
{
	int a = m, b = n;
	while (b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	gcd_result = a;
	lcm_result = (m * n) / gcd_result;
}
int main()
{
	int m, n;
	cout << "请输入两个自然数m，n:";
	cin >> m >> n;
	int gcd, lcm;
	gcd_lcm(m, n, gcd, lcm);
	cout << "最大公约数：" << gcd << endl;
	cout << "最小公倍数：" << lcm << endl;
	return 0;
}