#include<stdio.h>

int main()
{
	int num;
	 
	printf("请输入一个整数：");
	scanf("%d",&num);//从标准输入流中获取一个整型 
	printf("%-d",num);//在标准输出流中输出左对齐的整数 
	
	return 0;
	
}
