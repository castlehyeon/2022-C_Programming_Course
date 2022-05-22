#include<stdio.h>

int main(void) {
	int i,j,k;
	int max;
	//변수 선언

	printf("3개의 정수를 입력하시오: ");
	scanf("%d%d%d", &i, &j, &k);
	//사용자 값 입력

	max = (i > j) ? i : j;
	max = (max > k) ? max : k;
	//조건연산자를 사용한 최대값 비교

	printf("최대값: %d", max);
	//최대값 출력

	return 0;
}
