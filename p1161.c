#include <stdio.h>
#include <stdlib.h>
//开灯问题：https://www.luogu.com.cn/problem/P1161
int main() {
  int a, b, c, f, g, h, k, m,p;
  k = 0;
  f = 0;

  scanf("%d", &a);//输入操作次数
  c = a * 2;
  float d[c];
  for (b = 0; b < a; b+=2) { // 修改循环条件，避免越界
    scanf("%f %f", &d[b], &d[b + 1]);
    
  }//输入每一次操作的具体值
  float e[a];
  b = 0;
  for (b = 0; b < a; b++) {
    e[b] = d[f] * d[f + 1];
    f += 2;
  }//找到每一次最远被操作路灯的编号
  b = 0;
  g = 0;
  h = 0;
  for (b = 0; b < a; b++) { // 修改循环条件，避免越界
    g = 0;
    for (g = 0; g < a - 1; g++) { // 修改循环次数，避免越界
      if (e[g] < e[g + 1]) {
        h = e[g];
        e[g] = e[g + 1];
        e[g + 1] = h;
        g++;
      }
    }
  }找到三次操作中最远的被操作的路灯编号
  m = (int)e[0];
  float i[m]; // 定义一个最远的可以被操控路灯的数组
  for (b = 0; b < m; b++) { // 初始化数组 i
    i[b] = 1;
  }//定义关的状态为1以及奇数
  b = 0;
  g = 0
  for (p = 0; p < a; b+=2,p++) {
    for (c = 1; c <= d[b + 1]; c++) {
      k = c * d[b];
      i[k] += 1;
    }//对被操作的路灯的状态进行改变
    
  }
  b = 0;
  c = 0;
  for (b = 1; b < e[0]; b++) {
    if (i[b] / 2 != 1) {
      printf("%d", b);

    }
  }//计算结果
  return 0;
}
