#include <iostream> //c++에서는 .h없다.
using namespace std;
/* 
cin.getline(인수1,인수2,인수3)
-cin을 사용해서 띄어쓰기 입력을 처리할 떄 사용합니다.
    > 인수1: 입력 위치
      인수2: 입력 데이터 허용 크기( 인수2-1)
      인수3: 종결문자

 */


int main()
{
    int a,b;
    cout<<"숫자 2개 입력>";
    cin>>a>>b;
    cout<<a<<", "<<b<<endl;
    //cin은 기본적으로 data를 구분하는것은 공백이다.
    //buffer에 1(공백)2이렇게 있음
    //buffer
    char wordA[10];
    cout<<"단어 입력 >";
    cin>> wordA;
    cout<<"wordA :"<<wordA<<endl;
    cout<<endl;

    char wordB[50];
    cout<< "문장 입력>";
    cin.getline(wordB, sizeof(wordB), '\n');
    cout<<"wordB:"<<wordB<<endl;
    //데이터가 있으면 buffer값에 들어갔다가 종료값이 나오면 
    //buffer입구가 열리면서 입력값을 가져다가 쓴다.
    //buffer의 종료조건 앞에오는것은 하나의 값으로 취급된다.


}