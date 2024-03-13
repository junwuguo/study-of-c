#include<stdio.h>
#include<stdlib.h>

/**
 * https://www.luogu.com.cn/problem/P1047
 */
int main()
{
    int a;
    int b;
    
    scanf_s("%d", &a);//输入一个数 代表总数a
    
    scanf_s("%d", &b);//输入一个数 代表区域数量b
    int c = 2 * b;
    int* arr = (int*)malloc(c * sizeof(int));//为数组arr创建它所需要的大小的内存池
    
    for (int i =0; i < c; i+=2) {
        scanf_s("%d %d", &arr[i], &arr[i + 1]);
        printf("\n");
        
    }//使输入数据每两个数据为一组
    if (arr == NULL) {
        printf("nothing");
    }
    for (int i = c; i >0; i--) {
        for (int j = 0; j < c; j++) {
            if (arr[j] > arr[j + 1]) {
                int d;
                d = arr[j];
                arr[j] = arr[j + 1];
                d = arr[j + 1];
            }
        }
    }//使用冒泡法排序得到的数组
    
        int f = 0;
        f = a - (arr[c] - arr[0] + 1);
    
    printf("%d", f);

    return 0;
}
