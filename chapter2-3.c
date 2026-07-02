/* 역슬래시는 따옴표 안에
\n, \b, \t, \r, \a 이렇게 5개 제어문자 우선 학습
\b, \r로 인해 문자가 변경될 수 있음
*/

#include <stdio.h>

int main(void)
{
    printf("Be happy\n");
    printf("1234567890\n");
    printf("My\tfriend\n");
    printf("Goot\bd\tchance\n");
    printf("Cow\rW\a\n");
    return 0;
}