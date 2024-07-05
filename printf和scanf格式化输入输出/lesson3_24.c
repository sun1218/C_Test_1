#include<stdio.h>

int main()
{
	unsigned int num;
	 
	printf("请输入一个整数：");
	scanf("%jd",&num);//从标准输入流中获取长度位整型变量最大值的整型 
	printf("%jd",num);//在标准输出流中输出长度位整型变量最大值的整型
	
	return 0;
	
}
