#include"student.h"
//定义成员函数display
void Student::display() {
	cout << "学号：" << num << endl;
	cout << "姓名：" << name << endl;
	cout << "性别：" << sex << endl;
}
//定义成员函数set_value	，为私有数据成员赋值
void Student::set_value(int n, const char* na, char s) {
	num = n;
	strcpy(name, na);//字符串拷贝赋值
	sex = s;
}
