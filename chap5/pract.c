#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char* c1="moon";
    char* c2=(char*)malloc(sizeof(char)*20);
    strcpy(c2,"kyu sang");
    strcat(c2,c1);
    printf("%s",c2);
    return 0;
//포인터에서 문자열 붙이기는 이렇게 먼저 동적할당으로 메모리를 확보한 후에
//string함수를 사용해서 붙여주면 된다.

}
//conversion:변환, deprecated:자바언어에서 자주 쓰이는 용어로
//명령 혹은 문장이 나중에는 쓰이지 않게 될 것이라는 뜻이다.