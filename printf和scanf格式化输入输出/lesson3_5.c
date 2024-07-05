#include<stdio.h>

int main()
{
	unsigned int num;
	
	printf("请输入一个无符号整型:");
	scanf("%u", &num);//在标准输入流中读取一个无符号十进制整数
	printf("%u\n", num);//在标准输出流中输出 一个无符号十进制整数
	
	return 0;
	 
}
