#include <iostream>
#include <string>

using namespace std;

/* 
객체 지향 프로그램(OOP: Object Oriented Programming )
-class를 사용해서 생성한 객체들간의 상호관계를 이용해서 프로그램을 만드는 것입니다.

class
- 어떠한 사물의 특징의 소프트웨적으로 정의한 것입니다.
- class는 객체가 아닌 객체를 생성하기 위한 설계도 입니다.

객체
- class를 사용해서 생성된 것입니다( instance )

Ex) class 클래스명{
    접근제한자 :
        멤버필드(멤버변수);
        >class안에 선언된 변수 : 사물의 속성, 값

        메서드{멤버함수};
        > class안에 선언된 함수 : 사물의 행위, 동작 표현 -> 가능 구현
};
 */

class Data{
public:
    int value;

    void input(string message="데이터 입력>"){
        cout<<message; cin>>value;
    }

    void output(){
        cout<<"value :"<<value<<endl;
    }
};

int main(){

    Data dataA;
    dataA.value=10;
    cout<<dataA.value<<endl;
    dataA.input();
    dataA.output();
    cout<<endl;

    Data dataB;
    dataB.input();
    dataB.output();

}