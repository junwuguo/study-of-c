#include<stdio.h>
#include<stdlib.h>

/**
 * https://www.luogu.com.cn/problem/P1047
 */
int main() {
    // 定义马路长度和区域数量
    int len, count;
    scanf_s("%d %d", &len, &count);
    if (count < 1) {
        printf("nothing");
        return 0;
    }

    // 定义树的总数
    int max = len + 1;
    // 统计剩余树数量
    int surplus = max;
    // 定义存储需要移除的树标志位
    int flags[max] = {};

    for (int i = 0; i < count; ++i) {
        int start, end;
        scanf_s("%d %d", &start, &end);

        for (int j = start; j <= end; ++j) {
            // 根据坐标进行判断
            if (flags[j] == 0) {
                // 如果该树未移除则 移除且标记
                surplus--;
                flags[j] = 1;
            }
        }
    }

    printf("%d", surplus);
    return 0;
}
