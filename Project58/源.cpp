#include<iostream>
using namespace std;
int main()
{
	bool lockers[101] = { false };
	for (int student = 1; student <= 100; student++) {
		for (int locker = student; locker <= 100; locker += student) {
			lockers[locker] = !lockers[locker];
		}
	}
	cout << "开着的存物柜编号：";
	for (int i = 1; i <= 100; i++) {
		if (lockers[i]) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}