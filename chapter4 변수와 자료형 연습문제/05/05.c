#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEQNG 3.3058

int main() {
	int x;
	double result;

	printf("���� �Է��ϼ���:");
	scanf("%d", &x);
	
	result = x * SQMETER_PER_PYEQNG;

	printf("%lf �������Դϴ�.\n", result);

	printf("%lf �������Դϴ�.", result = x * 3.3058);

}