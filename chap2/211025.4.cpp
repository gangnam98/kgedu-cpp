#include <iostream> //c++에서는 .h없다.
using namespace std;

/* 
포인터
- 메모리의 주솟값을 가지는 변수
    일반적인 데이터는 저장할 수 없고, 상수 or변수의 주소를  가지는 변수이다.
 */
/* 포인터 변수 선언(생성)
- 자료형* 포인터변수명
 */
int main()
{
    int a=10;
    int* pa=&a;
    cout<<"a 주소:"<<&a<<"==pa 값:"<<pa<<endl;
    cout<<"a 값:"<<a<<" *pa 값:"<<*pa<<endl;

    *pa=100;
    cout<<"a 값:"<<a<<"== *pa값:"<<*pa<<endl;
    cout<<endl;

    double b=2.2;
    double* pb=&b;
    cout<<"b주소"<<&b<<"==pb 값:"<<pb<<endl;
}