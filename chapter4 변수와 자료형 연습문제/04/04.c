#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double volume, w, l, h; //부피 길이 너비 높이
	
	printf("상자의 가로 세로 높이를 한번에 입력:");
	scanf("%lf %lf %lf", &w, &l, &h);

	volume = w * l * h;
	printf("상자의 부피는 %lf입니다.", volume);

}\

