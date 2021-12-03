#include <iostream> //c++에서는 .h없다.
using namespace std;

int main()
{
    int a=10;
    cout<<"a :"<<a<<endl;
    cout<<endl;

    int b(20);
    cout<<"b: "<<b<<endl;
    cout<<endl;

    auto c=3.4;
    //자료형을 나중에 결정함.
    cout<<"c :"<<c<<endl;
    cout<<endl;

    int d=65;
    cout<<"d :"<<d<<endl;
    cout<<"(char)d :"<<(char)d<<endl;

    int e=123;
    printf("%d|\n",e);
    cout.width(5);
    cout<<e<<endl;

    double f=12.1234567;
    cout<<"f:"<<f<<endl;
    //cout에서는 총6자리까지 출력가능
    printf("%.7f\n",f);
    cout.precision(9);
    cout<<f<<endl;
}