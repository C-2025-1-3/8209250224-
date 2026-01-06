#include <iostream>
#include <cstring>  // 需包含字符串处理头文件
using namespace std;

void f(char* s, int i) {
    s[i] = '\0';          // 将第i个位置设为字符串结束符，截断字符串
    cout << s << endl;    // 输出截断后的字符串
    if (i > 1) {          // 递归终止条件：i=1时停止
        f(s, i - 1);      // 递归调用，i减1
    }
}

int main() {  // C++中main建议返回int
    char s[] = "abcd";    // 注意不能用char* s="abcd"（字符串常量不可修改）
    f(s, 4);              // 初始i为字符串长度（"abcd"长度为4）
    return 0;
}