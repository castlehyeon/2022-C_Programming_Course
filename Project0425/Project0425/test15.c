#include<stdio.h>

int main(void) {
	int input, answer, i;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &input);
	//사용자 값 입력

	printf("약수:");
	
	for (i = 1; i <= input; i++) {
		if (input % i == 0)
			printf(" %d", i);
	}
	return 0;
}