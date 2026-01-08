#include<iostream>
using namespace std;
void bubbleSort(double arr[], int size) {
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	double nums[10];
	cout << "输入10个双精度数：";
	for (int i = 0; i < 10; i++)
		cin >> nums[i];
	bubbleSort(nums, 10);
	cout << "排序后：";
	for (int i = 0; i < 10; i++)
		cout << nums[i] << "";
	return 0;
}