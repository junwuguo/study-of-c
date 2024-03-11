#include<stdio.h>

int main()
{
    int a[10];//用数组a来接受十个苹果的高度
    int b;//身高
    int i = 0;
    while (i <= 9) {
        scanf_s("%d", &a[i]);//输入十个数表示十个高度
        i++;
    }
    i = 0;
    printf("\n");
    scanf_s("%d", &b);//输入一个数表示身高
    int c = b + 30;//c表示能够着的最大高度
    int d = 0; //d表示能被够着的数
    while (i <= 9) {
        if (a[i] <= c) {
            d++;
            
        }
        i++;
    }
    
    printf("%d", d);
    return 0;
}
