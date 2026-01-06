#include<iostream>
using namespace std;

int* f() {
    // 动态分配int数组，长度为4，存于堆区
    int* list = new int[4] {1, 2, 3, 4};
    return list; // 返回动态数组的地址
}

int main() { // C++标准中main建议返回int
    int* p = f();
    cout << p[0] << endl; // 输出1
    cout << p[1] << endl; // 输出2
    delete[] p; // 释放动态数组的堆内存，避免内存泄漏
    return 0;
}