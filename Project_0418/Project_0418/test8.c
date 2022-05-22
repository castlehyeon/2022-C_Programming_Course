//#include <stdio.h>
//
//int main(void)
//{
//	int score;
//
//	printf("성적을 입력하시오: ");
//	scanf("%d", &score);
//
//	//if문에서 switch문으로
//	
//	switch (score / 10 )
//	{
//		case 10:
//			printf("만점입니다. 학점은 A입니다.");
//			break;
//		
//		case 9:
//			printf("학점은 A입니다.");
//			break;
//
//		case 8:
//			printf("학점은 B입니다.");
//			break;
//		
//		case 7:
//			printf("학점은 C입니다.");
//			break;
//
//		case 6:
//			printf("학점은 D입니다.");
//			break;
//
//		default:
//			printf("불합격 F입니다.");
//			break;
//	}
//	
//	return 0;
//}
//
////변수를 하나 준다. 90이면 나누면 앞자리가 9, 80점대는 8, 10으로 일단 나눠, 몫이 앞자리가 되니까. 그걸 가지고 case를 하는 방법.
////어차피 케이스는 10,9,8,7,6
////변수를 가지고 바로 제어식으로 써도 되기 때문에 score/10