//소수점형태와 지수형태는 %lf와 %le를 활용해서 변환가능
//지수 형태로 변환시 정규화 표기법에 따라 변환된다. 소수점앞 유효숫자 1자리만을 이용
#include <stdio.h>

int main(void)
{
    printf("%.1lf\n", 1e6);
    printf("%.7lf\n", 3.14e-5);
    printf("%le\n", 0.0000314);
    printf("%.2le\n", 0.0000314);
    return 0;
}