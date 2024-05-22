#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, e, g, h;
    g = 0;
    b = 0;
    scanf("%d", &a);

    int c[a];
    e = a - 1;
    int f[e];

    // 读取数组元素
    while (b < a) {
        scanf("%d", &c[b]);
        b++;
    }

    // 计算相邻元素的差的绝对值
    for (b = 0; b < e; b++) {
        f[b] = abs(c[b + 1] - c[b]);
    }

    // 冒泡排序算法
    for (b = 0; b < e - 1; b++) {
        for (int j = 0; j < e - 1 - b; j++) {
            if (f[j] > f[j + 1]) {
                g = f[j];
                f[j] = f[j + 1];
                f[j + 1] = g;
            }
        }
    }

    // 检查差值数组是否包含从1到n-1的所有整数
    for (b = 1; b <= e; b++) {
        if (f[b - 1] != b) {
            printf("Not jolly\n");
            return 0;
        }
    }

    printf("Jolly\n");
    return 0;
}
