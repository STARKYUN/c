/*
#include<stdio.h>

int main()
{
	char code1 = 'a';
	printf("%c %c %c ", code1 + 1, code1 + 2, code1 + 3);

}*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int x, y, result;

	printf("�ΰ��� ������ �Է��Ͻÿ�");
	scanf("%d %d", &x,&y);

	result = x + y;
	printf("%d+%d=%d\n",x,y,result);

	result = x - y;
	printf("%d-%d=%d\n",x,y,result);

	result = x / y;
	printf("%d/%d=%d\n" ,x,y,result);
	return 0;
}