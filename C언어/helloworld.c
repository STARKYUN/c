#include<stdio.h>
int main(void) 
{
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	
	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%.2fwn", f);
	double d = 4.428;
	printf("%,2lf\n", d);*/
	//const int YEAR = 2000;// ���
	//printf("�¾ �⵵ : %d\n", YEAR);
	//YEAR = 2001;

	// printf 
	// ����
	//int add = 3 + 7; // 10
	//printf("3 + 7 =%d\n", add);
	//printf("%d + %d = %d\n", 30, 79, 30 * 79);

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� ; ");
	sacnf_s("%d", &input);
	print("�Է°� : %d\n", input);*/

	/*int one, two, three,
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	print("ù��° �� : %d\n", one);
	print("�ι��� �� : %d\n", two);
	print("������ �� : %d\n", three);*/
	
	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n",c);*/

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf(
	return 0;
}