#include<stdio.h>

int main()
{
	int num;
	
	printf("请输入一个整数：");
	scanf("%zi",&num);//在标准输入流中读出一个长度为size_t的整数 
	printf("%zi\n",num);//在标准输出流中输出长度为size_t整数 
	
	return 0; 
	 
}
