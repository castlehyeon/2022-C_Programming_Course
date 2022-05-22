#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int mod(int x, int y);

int main(void)
{
    printf("do-while문을 사용한 사칙연산 계산기입니다.");
    printf("\n\n\n");
    int x, y, cal, result;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &x, &y);
    printf("\n");
    printf("입력한 수는 %d, %d입니다.\n\n", x, y);
    do
    {
        printf("*******연산 메뉴*******\n");
        printf("0. 숫자 재입력\n");
        printf("1. 덧셈\n");
        printf("2. 뺄셈\n");
        printf("3. 곱셈\n");
        printf("4. 나눗셈\n");
        printf("5. 나머지\n");
        printf("6. 종료\n");
        printf("수행할 연산을 선택하세요: ");
        scanf("%d", &cal);
        printf("\n");

        if (cal == 0)
        {
            printf("두 수를 입력하세요: ");
            scanf("%d %d", &x, &y);
            printf("\n");
            printf("입력한 수는 %d, %d입니다.\n\n", x, y);
            continue;
        }
        else if(cal == 1)
        {
            printf("덧셈결과는 %d입니다.\n", add(x, y));
        }
        else if(cal == 2)
        {
            printf("뺄셈결과는 %d입니다.\n", sub(x, y));
        }
        else if(cal == 3)
        {
            printf("곱셈결과는 %d입니다.\n", mul(x, y));
        }
        else if(cal == 4)
        {
            if (y > 0)
            {
                printf("나눗셈 결과는 %d입니다.\n", div(x, y));
            }
            else
            {
                printf("y의 숫자입력이 잘못 되었습니다.\n\n");
                printf("★★★★프로그램을 재시작하여 다시 숫자를 입력해주세요.★★★★\n");
                break;
            }
        }
        else if(cal == 5)
        {
            if (y > 0)
            {
                printf("나머지 결과는 %d입니다.\n", mod(x, y));
            }
            else
            {
                printf("y의 숫자입력이 잘못 되었습니다.\n\n");
                printf("★★★★프로그램을 재시작하여 다시 숫자를 입력해주세요.★★★★\n");
                break;
            }
        }
        else if(cal == 6)
        {
            break;
        }

        else
        {
            printf("★★★★수행할 연산을 다시 입력해주세요.★★★★\n\n");
            break;
        }
    } while (cal != 6);
    printf("프로그램을 종료합니다.");
    return 0;
}
int add(int x, int y)
{
    return x + y;
    
}
int sub(int x, int y)
{
    return x - y;
    
}
int mul(int x, int y)
{
    return x * y;
    
}
int div(int x, int y)
{
    
    return x / y;
}
int mod(int x, int y)
{
    return x % y;
}