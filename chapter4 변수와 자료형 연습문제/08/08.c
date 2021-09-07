// 사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램을 작성하라
/*
#include <stdio.h>

int main(void)
{
	char code1=	'A';	//	문자 상수로 초기화
	char code2=	65;	//	아스키코드로 초기화;

	printf("code1	=%c\n",code1);
	printf("code2=%c\n",code2);
	return 0;
}
*/
//사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램을 작성하라
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int code;

	
	printf("아스키 코드값을 입력하라:");
	scanf("%d", &code);

	printf("문자:%c입니다.", code);
}