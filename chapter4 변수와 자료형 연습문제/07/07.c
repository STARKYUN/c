#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int  mass, speed; //,����,�ӵ�
	double keneragy; //� ������

	printf("����(kg):");
	scanf("%d", &mass);

	printf("�ӵ�:");
	scanf("%d", &speed);

	keneragy = 0.5 * mass * speed * speed;
	printf("�������(j):%lf", keneragy);
}