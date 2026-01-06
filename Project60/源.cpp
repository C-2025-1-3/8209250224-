#include <iostream>
#include <cstring> // 用于strlen函数获取字符串长度
using namespace std;

// 判断s1是否是s2的子串，匹配则返回起始下标，否则返回-1
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1); // 子串长度
    int len2 = strlen(s2); // 主串长度

    // 子串为空 或 子串比主串长，直接返回-1
    if (len1 == 0 || len1 > len2) {
        return -1;
    }

    // 遍历主串，最多遍历到 len2 - len1 的位置（避免越界）
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        // 逐个字符比较子串和主串的对应位置
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) { // 找到匹配，返回起始下标
            return i;
        }
    }

    return -1; // 无匹配
}

int main() {
    char s1[80], s2[80]; // 定义字符串数组，长度按题目隐含要求设为80

    // 输入两个字符串
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin.ignore(); // 忽略前一个输入的换行符
    cin.getline(s2, 80); // 主串可能包含空格，用getline读取

    // 调用函数并输出结果
    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;

    return 0;
}