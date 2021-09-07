#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEQNG 3.3058

int main() {
	int x;
	double result;

	printf("평을 입력하세요:");
	scanf("%d", &x);
	
	result = x * SQMETER_PER_PYEQNG;

	printf("%lf 평방미터입니다.\n", result);

	printf("%lf 평방미터입니다.", result = x * 3.3058);

}