#include <iostream>
using namespace std;

// 合并两个有序数组的函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0; // i:list1指针, j:list2指针, k:list3指针

    // 同时遍历两个数组，取较小元素放入list3
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }

    // 处理list1剩余元素
    while (i < size1) {
        list3[k++] = list1[i++];
    }

    // 处理list2剩余元素
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
    int size1 = 0, size2 = 0;
    int num;

    // 输入第一个有序数组
    cout << "Enter list1: ";
    while (cin.peek() != '\n') { // 读取到换行符停止
        cin >> num;
        list1[size1++] = num;
    }
    cin.ignore(); // 忽略换行符

    // 输入第二个有序数组
    cout << "Enter list2: ";
    while (cin.peek() != '\n') {
        cin >> num;
        list2[size2++] = num;
    }

    // 调用合并函数
    merge(list1, size1, list2, size2, list3);

    // 输出合并后的数组
    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}