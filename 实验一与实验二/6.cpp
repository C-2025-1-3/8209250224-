#include<iostream>
using namespace std;
int main()
{
	char ch1;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> ch1;
	if ('a' <= ch1 && ch1 <= 'z')
		cout << char(ch1 - 32) << endl;
	else
		cout << int(ch1 + 1) << endl;
	return 0;


}