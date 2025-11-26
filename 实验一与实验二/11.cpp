#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int lettercount = 0, spacecount = 0, digitcount = 0, othercount = 0;
	char k;
	cout << "请输入一些字符：";
	while ((k = cin.get()) != '\n')
	{
		if (isalpha(k))
			lettercount++;


		else if (isspace(k))
			spacecount++;
		else if (isdigit(k))
			digitcount++;
		else
			othercount++;
	}
	cout << "英文字母个数是：" << lettercount << endl;
	cout << "空格个数是：" <<spacecount<< endl;
	cout << "数字个数是：" <<digitcount<< endl;
	cout << "其他字符个数是：" << othercount << endl;
	return 0;
}

