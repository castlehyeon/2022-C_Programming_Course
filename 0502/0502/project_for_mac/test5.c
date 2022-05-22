#include <stdio.h>

void printOptions()
{
    printf(" 'c' 섭씨온도에서화씨온도로변환\n");
    printf(" 'f' 화씨온도에서섭씨온도로변환\n");
    printf(" 'q' 종료\n");
}
double C2F(double c_temp)
{
    return 9.0 / 5.0 * c_temp + 32;
}
double F2C(double f_temp)
{
    return (f_temp - 32.0) * 5.0 / 9.0;
}
int main(void)
{
    char choice;
    double temp;
    while (1)
    {
        printOptions();
        printf("메뉴에서선택하세요.");
        choice = getchar();
        if (choice == 'q')
            break;
        else if (choice == 'c')
        {
            printf("섭씨온도: ");
            scanf("%lf", &temp);
            printf("화씨온도: %lf \n", C2F(temp));
        }
        else if (choice == 'f')
        {
            printf("화씨온도: ");
            scanf("%lf", &temp);
            printf("섭씨온도: %lf \n", F2C(temp));
        }
        getchar(); // 엔터키문자를삭제하기위하여필요!
    }
    return 0;
}