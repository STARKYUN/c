#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double volume, w, l, h; //���� ���� �ʺ� ����
	
	printf("������ ���� ���� ���̸� �ѹ��� �Է�:");
	scanf("%lf %lf %lf", &w, &l, &h);

	volume = w * l * h;
	printf("������ ���Ǵ� %lf�Դϴ�.", volume);

}\

