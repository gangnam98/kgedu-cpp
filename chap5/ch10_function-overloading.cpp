#include <iostream>
#include <string>

using namespace std;

/* 
함수 오버로딩 (function overloading)
- 같은 이름의 함수를 매개변수 타입만 다르게해서 여러개 정의하는 것입니다.
  가능한 이유: C++에서는 이름이 같아도 매개변수 갯수, 타입, 순서만 다르면 이름이 같아도 다른 함수로 인식함. 
    (단, 반환 타입은 오버로딩 조건에 해당하지 않는다.)
 */
void ShowInteger(int value){
    cout<<"ShowInteger :"<<value<<endl;
}

void ShowDouble(double value){
    cout<<"ShowDouble  :"<<value<<endl;
}
//함수의 이름이 달라도 매개변수가 다르면 여러개의 동일한 이름의 함수생성가능.


int main(){

    int va=10;
    ShowInteger(va);

    double vb =2.2;
    ShowDouble(vb);

    
}