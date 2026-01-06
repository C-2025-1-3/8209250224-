#include <iostream>
using namespace std;

int main() {
    int i, j, * pi, * pj;  // 定义指针变量pi、pj
    pi = &i;             // pi指向i的地址
    pj = &j;             // pj指向j的地址
    i = 5;
    j = 7;
    // 输出i、j的值，pi、pj的地址值，&i、&j的地址值
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << &j << '\t' << *pi << '\t' << *pj << endl;
    return 0;
}