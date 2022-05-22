/*
// 나머지연산자프로그램
#include<stdio.h>
#define SEC_PER_MINUTE 60
// 1분은60초
int main(void){ 
	int input, minute, second;
	
	printf("초를 입력하시오.");
	scanf("%d", &input);
	// 초단위의시간을읽는다.
	
	minute = input / SEC_PER_MINUTE;
	// 몇분
	second = input % SEC_PER_MINUTE; 
	// 몇초
	printf("%d초는%d분%d초입니다. \n", input, minute, second); 
	
	return 0;
}
*/