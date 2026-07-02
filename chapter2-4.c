//콤마로 구분하여 변환문자 위치에 출력
//실수와 정수변환문자 각각 %lf, %d

#include <stdio.h>

int main(void)
{
    printf("%d\n", 10);
    printf("%lf\n", 3.4);
    printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4-1.2);
    return 0;
}