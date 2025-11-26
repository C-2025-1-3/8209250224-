#include<iostream>
using namespace std;
int main()
{
	float C, F;
	cout << "请输入华氏度：";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "对应的摄氏度是：" << C << endl;
	return 0;


}