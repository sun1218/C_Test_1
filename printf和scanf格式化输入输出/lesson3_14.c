#include<stdio.h>

int main()
{
	int num;
	 
	printf("请输入一个整数：");
	scanf("%zd",&num);//从标准输入流中获取长度为size_t的整型 
	printf("%zd",num);//在标准输出流中输出size_t的整型  
	
	return 0;
	
}
