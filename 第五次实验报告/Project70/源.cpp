#include<iostream>
using namespace std;
class Time//定义time类
{
public:
	//类内定义输入时间的成员函数
	void inputTime()
	{
		cin >> hour;
		cin >> minute;
		cin >> second;
	}
	//类内定义输出时间的成员函数
	void showTime()
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
private:
	//数据改为私有
	int hour;
	int minute;
	int second;
};
int main(){
	Time t1;
	t1.inputTime();
	t1.showTime();
	return 0;
}