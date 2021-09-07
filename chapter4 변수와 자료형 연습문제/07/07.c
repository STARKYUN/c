#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int  mass, speed; //,질량,속도
	double keneragy; //운동 에너지

	printf("질량(kg):");
	scanf("%d", &mass);

	printf("속도:");
	scanf("%d", &speed);

	keneragy = 0.5 * mass * speed * speed;
	printf("운동에너지(j):%lf", keneragy);
}