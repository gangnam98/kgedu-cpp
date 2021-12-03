#include <iostream>
using namespace std;
/* 
bool 자료형
- Cpp 에 추가된 기본자료형 입니다.
-'true'(참), 'false'(거짓) 둘중에 하나의 값만 가질 수 있습니다.
-1byte 므기의 데이터 0과 1입니다.
 */

/* int main(){
cout<<"true:"<<true<<endl;
cout<<"false:"<<false<<endl;
//true false는 상수값으로 표기 가능함
cout<<"bool 자료형 크기:"<<sizeof(bool)<<endl;
cout<<endl;
//크기는 1바이트

bool check =true;
cout<<"check:"<<true<<endl;
//자료형이여서 변수선언가능
} */
int InputData(){
    int data;
    while(true){
        cout<<"숫자 입력>";cin>>data;
        if(data>=0)
        break;
    }
    return data;
}
bool OddCheck(int data){
    return (data%2==1)?true:false;
}

int main(){
int data=InputData();

if(OddCheck(data))
cout<<"홀수";
else
cout<<"짝수";
cout<<endl;



}