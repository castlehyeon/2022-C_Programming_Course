#include <stdio.h>

int main(void)
{
	double kor, eng, mat, phy, bio; //변수선언
	int sum;
	double avg;

	printf("국어점수를 입력하세요: ");  //각 과목 입력부분
	scanf("%lf", &kor);
	printf("영어점수를 입력하세요: ");
	scanf("%lf", &eng); 
	printf("수학점수를 입력하세요: ");
	scanf("%lf", &mat);
	printf("물리점수를 입력하세요: ");
	scanf("%lf", &phy);
	printf("생물학점수를 입력하세요: ");
	scanf("%lf", &bio);

	sum = kor + eng + mat + phy + bio;
	avg = sum / 5;
	printf("다섯 과목의 총점은 %d 입니다. \n", sum);
	printf("다섯 과목의 평균은 %lf 입니다.", avg);

	return 0;
}