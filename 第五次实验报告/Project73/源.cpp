#include<iostream>
using namespace std;
class Student {
public:
	int id;
	int score;
	void input() {
		cout << "输入学生学号和成绩：";

			cin >> id >> score;

	}
};
//查找最高成绩学生的函数，参数为对象数组和学生数量
Student* max(Student* arr, int n) {
	Student* pMax = arr;
	for(int i = 1; i < n; i++) {
		if(arr[i].score > pMax->score) {
			pMax = &arr[i];//更新最高成绩学生的指针
		}
	}
	return pMax;//返回最高成绩学生的指针
}
int main() {
	const int N = 5;
	Student stu[N];
	cout << "请依次输入5名学生的信息：" << endl;
	for(int i = 0; i < N; i++) {

		stu[i].input();
	}
	Student* pTop = max(stu, N);//调用max函数查找最高成绩学生
	cout << "最高成绩学生的信息：" << endl;
	cout << "学号：" << pTop->id << ", 成绩：" << pTop->score << endl;
	return 0;
}