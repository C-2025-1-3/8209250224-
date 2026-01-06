#include <iostream>
#include <cstring>
#include <cctype> // 用于字符大小写转换
using namespace std;

// 十六进制字符串转十进制整数
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char ch = toupper(hexString[i]); // 统一转为大写，方便判断
        int val;
        // 判断字符类型并转换为对应数值
        if (ch >= '0' && ch <= '9') {
            val = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            val = 10 + (ch - 'A');
        }
        else {
            // 遇到非法字符，返回0（也可根据需求抛错）
            return 0;
        }
        // 按位计算十进制值：每一位 = 上一位结果 * 16 + 当前位值
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "请输入十六进制字符串：";
    cin >> hexStr;

    int decimal = parseHex(hexStr);
    cout << "转换后的十进制数：" << decimal << endl;

    // 测试样例：parseHex("A5") 应返回165
    cout << "测试parseHex(\"A5\")：" << parseHex("A5") << endl;

    return 0;
}