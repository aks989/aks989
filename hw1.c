#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num1, num2;
	printf("���� �� �� �Է�:");
	scanf("%d %d", &num1, &num2); //10, 15 �Է�
	printf("AND�� ���� ��: %d\n", num1 & num2);
	printf("OR�� ���� ��: %d\n", num1 | num2);
	printf("XOR�� ���� ��: %d\n", num1 ^ num2);
}