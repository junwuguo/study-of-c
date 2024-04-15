//任务描述
//题目描述:找出具有m行n列二维数组Array的“鞍点”，即该位置上的元素在该行上最大，在该列上最小，其中1<=m,n<=10。
//相关知识（略）
//编程要求
//输入
//输入数据有多行，第一行有两个数m和n，下面有m行，每行有n个数。
//输出
//按下列格式输出鞍点： Array[i][j]=x 其中x代表鞍点，i和j为鞍点所在的数组行和列下标，我们规定数组下标从0开始。一个二维数组并不一定存在鞍点，此时请输出None 我们保证不会出现两个鞍点的情况，比如： 3 3 1 2 3 1 2 3 3 6 8
//测试说明
//平台会对您的代码进行运行测试，如果实际输出与预期输出相同，则算通关。
//样例输入：
//3 3 1 2 3 4 5 6 7 8 9
//样例输出：
//Array[0][2]=3
//开始你的任务吧，祝你成功！
#include <stdio.h>

int main(void) {
    int a, b, c, d, f, g, i=0;
    f = -99999;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &a, &b);

    int e[a][b];

    printf("Enter the elements of the array:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            scanf("%d", &e[c][d]);
        }
    }

    printf("Saddle points found at positions:\n");
    for (c = 0; c < a; c++) {
        for (d = 0; d < b; d++) {
            if (e[c][d] > f) {
                f = e[c][d];
                i = d;
            }
        }
        for (g = 0; g < a; g++) {
            if (e[g][i] < f) {
                break;
            }
        }
        if (g == a) {
            printf("Array[%d][%d] = %d\n", c, i, f);
        }
    }

    return 0;
}
