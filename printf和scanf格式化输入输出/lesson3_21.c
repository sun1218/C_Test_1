#include<stdio.h>

int main()
{
	short int num;
	 
	printf("请输入一个整数：");
	scanf("%hd",&num);//从标准输入流中获取长度为short int的整型
	printf("%hd",num);//在标准输出流中输出长度为short int的整型 
	
	return 0;
	
}
