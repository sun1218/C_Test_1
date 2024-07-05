#include<stdio.h>

int main()
{
	unsigned int num;
	printf("请输入一个十六进制整数：");
	scanf("%x",&num);//在标准输入流中读取一个十六进制整数 
	printf("%x\n",num);//在标准输出流中输出一个无符号十六进制整数
	
	return 0; 
	 
 } 
