//// while 문을이용한성적의평균구하기프로그램
//#include <stdio.h>
//
//int main (void) { 
//	int grade, n;
//	float sum, average; 
//	// 필요한변수들을초기화한다.
//	
//	n = 0;
//	sum = 0;
//	grade = 0;
//	printf("종료시음수입력\n");
//	// 성적을입력받아서합계를구하고학생수를센다. 
//		
//	while(grade >= 0) 
//	{
//		printf("성적을입력하시오: ");
//		scanf("%d", &grade); 
//		sum += grade;
//		n++;
//	} 
//	sum = sum -grade; 
//	// 마지막데이터를제거한다.
//	n--;
//	// 마지막데이터를제거한다. 
//	
//	// 평균을계산하고화면에출력한다.
//	average = sum / n;
//	printf("성적의평균은%f입니다.\n", average);
//	
//	return 0; 
//}