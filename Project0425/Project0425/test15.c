#include<stdio.h>

int main(void) {
	int input, answer, i;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input);
	//����� �� �Է�

	printf("���:");
	
	for (i = 1; i <= input; i++) {
		if (input % i == 0)
			printf(" %d", i);
	}
	return 0;
}