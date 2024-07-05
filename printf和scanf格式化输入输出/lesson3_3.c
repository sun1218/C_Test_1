#include<stdio.h>

int main()
{
	int num;
	
	printf("请输入一个数（0开头代表8进制 0x代表16进制）");
	scanf("%i", &num);//在标准输入流中读取一个整数	 
	printf("%i\n", num);//在标准输出流中输出一个整数
	
	return 0; 
} 
