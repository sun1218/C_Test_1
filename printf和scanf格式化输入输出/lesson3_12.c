#include<stdio.h>

int main()
{
	void *p;
	 
	printf("请输入一个指针的值：");
	scanf("%p",&p);//在标准输入流中获取一个指针的值 
	printf("%p",p);//在标准输出流中输出一个和指针的值 
	
	return 0;
	
}
