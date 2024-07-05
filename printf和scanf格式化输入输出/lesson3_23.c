#include<stdio.h>

int main()
{
	unsigned long int num;
	 
	printf("请输入一个整数：");
	scanf("%l64",&num);//从标准输入流中获取无符号64位整型 
	printf("%l64",num);//在标准输出流中输出无符号64位整型 
	
	return 0;
	
}
