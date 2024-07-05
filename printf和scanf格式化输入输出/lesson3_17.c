#include<stdio.h>

int main()
{
	int num;
	 
	printf("请输入一个整数：");
	scanf("%d",&num);//从标准输入流中获取整型 
	printf("%010d",num);//在标准输出流中输出前面用0填充的宽度为10的整型  
	
	return 0;
	
}
