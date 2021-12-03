#include <iostream> //c++에서는 .h없다.
using namespace std;
//using의 의미는 나중에 어떤 함수가 나왔을때 이 namespace를
//참조해 보아라 라는 의미이다.
struct Point
{
    int x, y;
};
//최우선 namespace를 설정
int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}
ostream& operator<<(ostream& os, Point p)
{
    os << p.x << ' ' << p.y;
    return os;
}
//operator의 반환값은 ostream이다. ostream을 반환해야 연쇄적으로 연산가능
//<<은 연산자이다.
//반환값!=출력값, c언어에서는 같은 함수명을 선언할 수 없었지만, c++에서는 같은 함수명어도 
//다른 자료형의 매개변수를 가지고 있으면 다르게 취급한다.


Point operator+(Point p1, Point p2)
{
    Point ret = {p1.x + p2.x, p1.y + p2.y};
    //메서드의 정의:class에 속에있는 함수.(속성은 값을 저장, 메서드는 동작을 저장->속성:변수,메서드->함수가됨.)
    return ret;
}

/* 
namespace ksmoon
{
    void print()
    {
        cout<<"Hello\n";
    }
    namespace cimoon
    {
        void print()
        {
            cout<<"cimHello\n";
        }
    }
} */

//using namespace ksmoon;
int main(void)
{
    //int va;
    //cout <<"숫자 입력>";
    Point p1 = {1, 3}, p2 = {2, 4};
    cout << p1 + p2;
    cout << operator+(p1, p2);
    cout << "Hello";
    cout << p1;
    printf("%d %d", p1.x, p1.y);
}