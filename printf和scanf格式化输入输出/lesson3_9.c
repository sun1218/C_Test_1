#include<stdio.h>

int main()
{
	float num;
	
	printf("请输入一个浮点数：");
	scanf("%g",&num);//在标准输入流中读取一个浮点数 
	printf("%g",num);//在标准输出流中选%f和%e中较短的输出方式输出浮点数 
	
	return 0;
}
