#include<stdio.h>

int main()
{
	int num;
	 
	printf("请输入一个整数：");
	scanf("%d",&num);//从标准输入流中获取整型 
	printf("%#x",num);//转换为16进制后在标准输出流中输出 
	
	return 0;
	
}
