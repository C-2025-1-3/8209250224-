#include<iostream>
#include<iomanip>
using namespace std;
//判断一个数是否为素数的函数
bool is_prime(int num) {
	if (num < 2) {
		return false;
	}
	//遍历2到num的平方根，判断是否能被整除
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int count = 0;//记录找到素数的个数
	int num = 2;//从最小的素数2开始查
	cout << "前两百个素数：" << endl;
	while (count < 200) {
		if (is_prime(num)) {
			//设置输出宽度为5，对齐显示
			cout << setw(5) << num;
			count++;
			//每十个素数换行
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}