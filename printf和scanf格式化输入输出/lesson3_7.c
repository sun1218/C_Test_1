#include<stdio.h>

int main()
{
	double num;
	
	printf("请输入一个以指数形式的单、双精度浮点数");
	scanf("%e",&num);//在标准输入流中读取一个以指数形式的单双精精度浮点数 
	printf("%e\n",num);//在标准输出流中输出一个以指数形式的单双精度浮点数
	
	return 0; 
}
