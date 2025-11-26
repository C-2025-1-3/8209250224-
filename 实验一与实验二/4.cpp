#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	int start1, k,i;
	start1 = (a < b )? a : b;


		for(k=start1;k--;)
		if (a%k == 0 && b %k == 0)
			break;
		i = a*b/k;
		
		cout <<"最小公倍数是：" <<i  << endl;
		cout << "最大 公约数是：" <<k<< endl;
		return 0;



}