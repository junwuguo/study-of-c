#include <stdio.h>

#define MAX_SIZE 100 // 假设最大输入长度为 100

int main() {
  char input[MAX_SIZE]; // 声明一个足够大的数组来存储输入的字符
  char reversed[MAX_SIZE]; // 用于存储逆序后的字符
  int length = 0;

  printf("Enter a string: ");
  
  // 读取用户输入的字符并计算字符串的长度
  while ((input[length] = getchar()) != '\n') {
    if (input[length] != '\0') {
      length++;
    }
  }

  // 将输入字符串逆序存储到数组 reversed 中
  for (int i = 0; i < length; i++) {
    reversed[i] = input[length - i - 1];
  }

  // 输出逆序后的字符串
  printf("Reversed string: ");
  for (int i = 0; i < length; i++) {
    printf("%c", reversed[i]);
  }
  printf("\n");

  return 0;
}
