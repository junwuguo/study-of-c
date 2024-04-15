#include <stdio.h>


/**
 * 查找 鞍点
 * @param row  行数
 * @param col  列数
 * @param array  二维数组
 */
void findSaddlePoint(int row, int col, int array[row][col]) {
    // 存储每行的最大值所在列
    int rows[row] = {};

    // 解析每行最大值
    for (int i = 0; i < row; ++i) {
        int max = array[i][0];
        int max_col = 0;
        for (int j = 1; j < col; ++j) {
            int current = array[i][j];
            if (current > max) {
                max = current;
                max_col = j;
            }
        }
        rows[i] = max_col;
    }

    /* 判断每行的最大值是否在该列上为最小值
     * r 为当前行
     * j 为最大值所在列
     * p 为当前行最大值
     * b 表示是否为 鞍点(=1)
     */
    for (int r = 0; r < row; ++r) {
        int j = rows[r];
        int p = array[r][j];
        int b = 1;

        // 判断每一行指定列的值是否大于 p
        for (int i = 0; i < row; ++i) {
            int current = array[i][j];
            // 如果当前行指定列的值小于p, 则不是 鞍点
            if (current < p) {
                b = 0;
                break;
            }
        }

        if (b == 1) {
            printf("Array[%d][%d]=%d\n", r, j, p);
        }
    }

}

/**
 * 题目描述:找出具有m行n列二维数组Array的“鞍点”，即该位置上的元素在该行上最大，在该列上最小，其中1<=m,n<=10。
相关知识（略）
编程要求
输入
输入数据有多行，第一行有两个数m和n，下面有m行，每行有n个数。
输出
按下列格式输出鞍点： Array[i][j]=x 其中x代表鞍点，i和j为鞍点所在的数组行和列下标，我们规定数组下标从0开始。一个二维数组并不一定存在鞍点，此时请输出None 我们保证不会出现两个鞍点的情况，比如： 3 3 1 2 3 1 2 3 3 6 8
测试说明
平台会对您的代码进行运行测试，如果实际输出与预期输出相同，则算通关。
样例输入：
3 3 1 2 3 4 5 6 7 8 9
样例输出：
Array[0][2]=3
开始你的任务吧，祝你成功！
 */
int main(void) {
    int m, n;

    printf("Enter the number of rows and columns:");
    scanf("%d %d", &m, &n);

    int array[m][n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &array[i][j]);
        }
    }
    findSaddlePoint(m, n, array);
    return 0;
}
