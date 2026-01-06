#include<iostream>
using namespace std;

//定义长方柱类
class Cuboid {
public:
	//输入长宽高的函数
	void input() {
		cout << "请输入长方柱的长、宽、高：" << endl;
		cin >> length >> width >> height;
	}
	//计算体积的函数
	double calculatevolume() {
		return length * width * height;
	}
	//输出体积的函数
	void output() {
		double volume = calculatevolume();
		cout << "长方柱的体积为：" << volume<< endl;
	}
private:
	//长方柱的长、宽、高
	double length;
	double width;
	double height;
};
int main() {
//定义3个长方柱对象
	Cuboid c1, c2, c3;
	//依次输入并输出3个长方柱的体积
	cout << "第1个长方柱：" << endl;
	c1.input();
	c1.output();
	cout << "第2个长方柱：" << endl;
	c2.input();
	c2.output();
	cout << "第3个长方柱：" << endl;
	c3.input();
	c3.output();

	return 0;

}