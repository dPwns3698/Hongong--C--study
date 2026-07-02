/* main은 명령문에서 한개만 사용가능
main 함수 안에는 어떠한 명령문이라도 모두 입력가능
main 이외의 함수도 있고 재사용, 가독성, 유지보수 같은 이유 때문에 사용
return 0는 컴퓨터에 이 함수를 정상종료 하겠다는 표시. 특정 함수만 해당
*/

#include <stdio.h>

int main(void)
{
    printf("Be happy ");
    printf("My friend");

    return 0;
}