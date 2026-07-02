//10진수와 8,16진수는 0, 0x를 통해 구분
//10진수, 8진수, 16진수는 %d, %o, %x를 통해 변환 가능

#include <stdio.h>

int main(void)
{
    printf("%d\n", 12);
    printf("%d\n", 014);
    printf("%d\n", 0xc);
    printf("%d, %d, %d\n", 12, 014, 0xc);
    printf("%o, %x, %X\n", 12, 12, 12);
    return 0;
}