#include <iostream>
#include <cstring>
using namespace std;

// 查找子串函数，返回第一次匹配的下标，失败返回-1
int indexof(const char* s1, const char* s2) {
    // 子串为空，按逻辑返回0（或根据需求调整）
    if (s1[0] == '\0') return 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // s1比s2长，不可能是子串
    if (len1 > len2) return -1;

    // 遍历s2的所有可能起始位置
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        // 逐个字符匹配s1和s2的子串
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        // 所有字符匹配成功，返回起始下标i
        if (j == len1) {
            return i;
        }
    }
    // 未找到子串
    return -1;
}

int main() {
    char s1[100], s2[100];
    cout << "请输入子串s1: ";
    cin >> s1;
    cout << "请输入主串s2: ";
    cin >> s2;

    int pos = indexof(s1, s2);
    if (pos == -1) {
        cout << "s1不是s2的子串" << endl;
    }
    else {
        cout << "s1在s2中第一次出现的下标是: " << pos << endl;
    }

    return 0;
}