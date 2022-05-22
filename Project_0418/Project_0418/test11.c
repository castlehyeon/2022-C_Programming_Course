#include<stdio.h>

int main(void)
{
	int time, age, charge;
	//변수 선언

	printf("현재 시간과 나이를 입력하시오(시간, 나이)");
	scanf("%d %d", &time, &age);
	//사용자 값 입력

	if (time < 17)
	{
		if (age >= 13 && age <= 64)
			printf("요금은 34,000원입니다.");
		else
			printf("요금은 25.000원입니다.");
	}
	else
		printf("요금은 10.000원입니다.");

	return 0;
}