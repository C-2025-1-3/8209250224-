#include<iostream>
using namespace std;
int main()
#define PI 3.1415926

{
	double V, r, h;

	
	cout << "请输入半径：" ;
	cin >> r;
	cout << "请输入高：" ;
	cin >> h;
	V = PI * r * r * h/3;
	cout << "体积是：" << V << endl;
	return 0;

}