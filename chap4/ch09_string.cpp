#include <iostream>
#include <cstring>//c에서 가져오는거
#include <string>//c++만의

using namespace std;
/* 
cin.getline(인수1, 인수2, 인수3)
-cin을 사용해서 띄어쓰기 입력을 처리할때 사용합니다,
>인수1:입력 위치
 인수2:처리할 데이터 크기(인수2-1)
 인수3:종결문자

cin.ignore(인수1,인수2)
- 입력 버퍼의 값을 무시하고 넘길떄 사용한다.
    >인수1: 최대 무시하고 넘기는 데이터 수 (byte)
     인수2: 종결문자 사용
 */
/* int main(){

    int a,b;
    cout<<"숫자 2개 입력>";
    cin.ignore(10,'\n');
    //최대 10개를 빼되 종료조건이 나오면 거기까지만 빼도됨.
    cin>>a>>b;
    cout<<a<<","<<b<<endl;



    char wordA[10];
    cout<<"단어입력>";
    
    cin>>wordA;
    cout<<"wordA:"<<wordA<<endl;
    cout<<endl;
    //cin은 공백처리x, cin은 공백전까지를 하나의 문자열로 처리하기때문에
    char wordB[50];
    cout<<"문장 입력>";
    
    cin.getline(wordB,sizeof(wordB),'\n');
    cout<<"wordB :"<<wordB<<endl;
    //buffer는 enter를 누르면 열리게된다.
    //열린다음에 띄어쓰기가 있는 곳까지 하나의 문자로 취급하는 cin을 만남



} */

/* 
strcpy()
- strcpy(문자열_a, 문자열_b)
 >문자열_b 의 값을 문자열_a로 복사합니다.

 strcpy_s( 문자열_a, 허용크기, 문자열_b)
 > 문자열_b의 값을 문자열_a로 복사할 때, 허용크기 내인지를 확인해서 복사합니다.
 > 다른 컴파일러에서는 _s를 지원하지 않는다.
 */
/* int main(){

    char text[10]="test";
    //test="수정";(상수값을 변경불가하지)
    strncpy(text,"수정",sizeof(text));
    cout<<"test:"<<text<endl;
    


} */

/* int main(){
    char stnA[10]="aba";
    char stnB[5]="abb";
    char stnC[]="aba";
    
    cout<<"stnA, stnB 같은가요:"<<strcmp(stnA,stnB)<<endl;
    cout<<"stnB, stnA 같은가요:"<<strcmp(stnB,stnA)<<endl;
    cout<<"stnA, stnC 같은가요:"<<strcmp(stnA,stnC)<<endl;
//strcmp:앞에서부터 문자를 하나하나 비교한다.
//다른 문자가 나오면 앞에서 뒤에것을 뺀다.
    if (strcmp(stnA,stnC)==0)
        cout<<"같아요"<<endl;
    else
        cout<<"달라요"<<endl;
} */

/* 
string class
- c++ 에서 문자열 관련 데이터를 편리하게 처리해주는 class입니다.
- 'string' 헤더파일 필요
 */

int main(){



}