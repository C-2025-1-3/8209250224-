#include<iostream>
using namespace std;
class Point {
public:
	//构造函数，利用构造函数参数初始化x，y为（60,80)
	Point(int x_val = 60, int y_val) {
		x = x_val;
		y = y_val;

	}
	void setPoint(int x_val, int y_val) {
		x = x_val;
		y = y_val;
	}
	//成员函数，显示点的坐标
	void display() {
		cout << "当前坐标点为：("<<x<<","<<y<<")" << endl;
	}
private:
	int x;
	int y;
};
int main() {
	//创建Point类的对象p1，利用构造函数初始化x为60，y为80
	Point p1;
	cout << "初始化后的坐标：" << endl;
	p1.display();
	p1.setPoint(60, 80);
	cout << "修改后的坐标：" << endl;
	p1.display();
	p1.setPoint(100, 200);
	cout << "再次修改后的坐标：" << endl;
	p1.display();
	return 0;
}