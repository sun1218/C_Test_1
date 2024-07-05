#include<stdio.h>

int main()
{
	unsigned int num;
	
	printf("请输入一个八进制数整数：");
	scanf("%o", &num);//在标准输入流中读取一个八进制整数 
	printf("%o\n",num); //在标准输出流中输出一个无符号八进制 
	
	return 0;
}
