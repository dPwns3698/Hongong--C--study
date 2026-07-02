//문자는 %c, 문자열은 %s 변환문자를 사용하는구나

#include <stdio.h>

int main(void)
{
printf("%c\n", 'A');
printf("%s\n", "A");
printf("%c는 %s입니다\n",  '1', "first");
return 0;
}