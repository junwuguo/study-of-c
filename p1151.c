#include <stdio.h>
#include <string.h>

// https://www.luogu.com.cn/problem/P1151
int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l, m;
    scanf("%d", &a);
    b = 10000;
    for (b = 10000; b <= 30000; b++) {
        c = b / 10000;//万位数
        d = b - c * 10000;
        e = d / 1000;//千位数
        f = d - e * 1000;
        g = f / 100;//百位数
        h = f - g * 100;
        i = h / 10;//十位数
        j = h - i * 10;//个位数

        k = c * 100 + e * 10 + g;
        l = e * 100 + g * 10 + i;
        if (k % a == 0 && l % a == 0 && f % a == 0) {
            printf("%d", b);
            printf("\n");
            m = 0;
            m += 1;
        }

    }
    if (m == 0) {
        printf("No");
    }
    return 0;
}

