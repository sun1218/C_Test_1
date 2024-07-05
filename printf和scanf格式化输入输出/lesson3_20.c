#include<stdio.h>

int main()
{
	char num;
	 
	printf("请输入一个整数：");
	scanf("%hhd",&num);//从标准输入流中获取长度为8bits的整型
	printf("%hhd",num);//在标准输出流中输出长度为8bits的整型 
	
	return 0;
	
}
