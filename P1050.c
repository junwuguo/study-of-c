//https://www.luogu.com.cn/problem/P1150
#include<stdio.h>
int main()
{
	int n, k;
	scanf_s("%d %d", &n, &k);
	int a;//烟蒂数量
	int b;//总共吸的烟；
	int c=n/k;//第一次兑换的烟
	int d;//第一次兑换剩余的烟蒂
	d = n % k;
	a =  c + d;
	b = n + c;
	int f;
	int g=0;
	int m;
	while (a >=k) {
		m = a + g;
		f = a / k;
		g = a % k;
		a = g + f;
		b += f;
	}
	printf("%d", b);


	return 0;
}
