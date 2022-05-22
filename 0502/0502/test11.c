//// 소문자를대문자로변경한다. 
//#include<stdio.h>
//
//int main (void)
//{
//	char letter;
//	
//	while(1) 
//	{ 
//		printf("소문자를입력하시오: ");
//		scanf(" %c", &letter);
//		
//		if( letter == 'Q') 
//			break;
//		
//		if( letter < 'a'|| letter > 'z') 
//			continue;
//		letter -= 32; 
//		printf("변환된대문자는%c입니다.\n", letter);
//	} 
//	return 0;
//}