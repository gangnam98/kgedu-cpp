#include <iostream> //c++에서는 .h없다.
using namespace std;

void BasicFunc(const char* message)
{
    cout<<message<<endl;
}

void InlineFunc(const char* message)
{
    cout << message<<endl;
}

inline void InlineFunc(const char* message)
{
    cout<<message<<endl;
    //inline은 호출과정을 생략하고 바로 int main안으로 들여보냄.
}
//inline코드는 다른 코드와 다르게 stack으로 갔다가 빠져나가는게 아니라
//그냥 int main()안에 존재한다.
//inline시킬수있는 친구들은 코드가 짧아야한다.
int main()
{
    BasicFunc("- 일반 함수 -");
    cout<<endl;

    InlineFunc("- inline 함수 -");


}