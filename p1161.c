#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//开灯问题：https://www.luogu.com.cn/problem/P1161
int main() {
    // 操作次数
    int n;
    scanf("%d", &n);
    /*
     * 确保能够存放所有操作.
     *
     * 由于申请的内存空间过大. 所以不推荐使用 int lamps[2000001] 进行操作, 避免栈溢出.
     *
     * 使用 calloc 动态申请分配. 规避静态申请可能栈溢出问题
    */
    int *lamps = (int *) calloc(2000001, sizeof(int));
    // 存放最后一个奇数操作的索引
    int lastOdd = 0;

    for (int i = 0; i < n; ++i) {
        double a;
        int t;
        scanf("%lf %d", &a, &t);

        for (int j = 1; j <= t; ++j) {
            int index = (int) floor(j * a);
            lamps[index] ^= 1;  // 使用异或操作翻转灯的状态
            if (lamps[index] == 1) {
                lastOdd = index;
            }
        }
    }

    printf("%d", lastOdd);
    free(lamps);
    return 0;
}
