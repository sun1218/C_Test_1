#include<stdio.h>

int main()
{
	long int num;
	
	printf("请输入一个整数：");
	scanf("%ti",&num);//在标准输入流中读出一个长度为ptrdiff_t的整数 
	printf("%ti\n",num);//在标准输出流中输出一个ptrdiff_t的整数
	
	return 0; 
	 
}
