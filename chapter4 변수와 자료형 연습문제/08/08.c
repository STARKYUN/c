// ����ڰ� �ƽ�Ű �ڵ尪�� �Է��ϸ� �� �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�
/*
#include <stdio.h>

int main(void)
{
	char code1=	'A';	//	���� ����� �ʱ�ȭ
	char code2=	65;	//	�ƽ�Ű�ڵ�� �ʱ�ȭ;

	printf("code1	=%c\n",code1);
	printf("code2=%c\n",code2);
	return 0;
}
*/
//����ڰ� �ƽ�Ű �ڵ尪�� �Է��ϸ� �� �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int code;

	
	printf("�ƽ�Ű �ڵ尪�� �Է��϶�:");
	scanf("%d", &code);

	printf("����:%c�Դϴ�.", code);
}