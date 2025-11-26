#include<iostream>
using namespace std;
int main()
	{
	double num1, num2;

	char op;
	cout << "请输入第一个数字：";
	cin >> num1;
	cout << "请输入运算符：";
	cin >> op;
	cout << "请输入第二个数字：";
	cin >> num2;

	
	double result;
	bool valid = true;
	switch(op)
	{ 

	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 == 0)
		{
			cout << "错误 除数不能为0";
			valid = false;
		}
		else
		{
			result = num1 / num2;
		}
		break;
	case'%':
		if (num2 == 0)
		{
			cout << "不能为0";
			valid = false;

		}
		else
		{
			result = int(num1) % int(num2);
		}
		break;
	default:
		cout << "运算符非法" << endl;
		valid = false;
	}
	if (valid) {
		cout << "运算结果为：" << result;
	}

		return 0;
	}