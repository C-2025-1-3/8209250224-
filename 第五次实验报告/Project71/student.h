#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>
using namespace std;
class Student {
public:
	void display();//声明显示信息的成员函数
	void set_value(int n, const char* na, char s);//声明赋值的成员函数
private:
	int num;//学号
	char name[20];//姓名
	char sex;//性别
};
#endif

