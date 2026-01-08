#include<iostream>
using namespace std;
//n为题目所给天数
int gettao(int n)
{
	int tao = 1;//剩余桃量
	for (int i = n - 1; i >= 1; i--)
	{
		tao = 2 * (tao + 1);

	}
	return tao;
}
int main()
{
	int day = 10;
	cout << "摘的桃子个数：" << gettao(day) << endl;
	return 0;
}
