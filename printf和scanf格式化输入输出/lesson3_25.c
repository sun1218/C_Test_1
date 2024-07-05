#include<stdio.h>

int main()
{
	long int num;
	
	printf("请输入一个整数：");
	scanf("%ld",&num);//在标准输入流中读出一个长度为long int的整数 
	printf("%ld\n",num);//在标准输出流中输出一个长度为long int的整数 
	
	return 0; 
	 
}
