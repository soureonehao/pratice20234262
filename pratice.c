#include<stdio.h>
void swap(int *a1, int *a2) {	//ָ�뺯������
	int temp;
	temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
void main() {
	int num1, num2;
	printf("��������������");
	scanf_s("%d%d", &num1, &num2);
	swap(&num1, &num2);
	printf("%d %d", num1, num2);
	getch();
}