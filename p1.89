//https://www.luogu.com.cn/problem/P1089  //
#include<stdio.h>
int main()
{
	int a[12];
	int i;
	for (i = 0; i < 12; i++) {
		scanf_s("%d", &a[i]);
		if (i < 11) {
			printf("\n");
		}
	}
	int b;
	int g;
	int f;
	int c;
	i = 0;
	int d;
	int e;
	g = 0;
	d = 0;
	for (i = 0; i < 12; i++) {
	
		f = 300 - a[i] + g;
		if (f < 0) {
			printf("-%d", i + 1);
			return 0;
		}
		c = f / 100;
		switch (c) {
		case 0:
			g = f;
			break;
		case 1:
			g = f - 100;
			d += 100;
			break;
		case 2:
			g = f - 200;
			d += 200;
			break;
		case 3:
			g = f - 300;
			d += 300;
			break;
		default:
			break;

		}

	}
	e = d * 1.2;
	int k;
	k = e+g;
	printf("%d", k);

	
	return 0;
}
