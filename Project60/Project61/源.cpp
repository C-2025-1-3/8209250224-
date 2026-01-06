#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 统计字母出现次数的函数
void count(const char s[], int counts[]) {
    // 初始化数组为0
    memset(counts, 0, 26 * sizeof(int));
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        // 判断是否为字母
        if (isalpha(s[i])) {
            // 统一转为小写，计算对应下标
            char ch = tolower(s[i]);
            int index = ch - 'a';
            counts[index]++;
        }
    }
}

int main() {
    char str[1000];
    int counts[26];

    printf("Enter a string: ");
    // 读取带空格的字符串
    fgets(str, sizeof(str), stdin);
    // 去除fgets读取的换行符
    str[strcspn(str, "\n")] = '\0';

    // 调用统计函数
    count(str, counts);

    // 输出非零的统计结果
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c: %d time%s\n", 'a' + i, counts[i], counts[i] > 1 ? "s" : "");
        }
    }

    return 0;
}