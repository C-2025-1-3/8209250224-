#include <iostream>
using namespace std;

// 排序函数：对动态数组进行升序排序（冒泡排序）
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // 指针方式访问数组元素
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数：";
    cin >> n;

    // 动态分配数组内存
    int* arr = new int[n];

    // 键盘输入数组元素（指针方式）
    cout << "请输入" << n << "个整数：";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    // 调用排序函数
    sortArray(arr, n);

    // 指针方式输出排序后的数组
    cout << "排序后的数组：";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 释放动态内存
    delete[] arr;
    arr = nullptr; // 避免野指针

    return 0;
}