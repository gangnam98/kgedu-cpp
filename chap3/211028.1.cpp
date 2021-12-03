#include <iostream> //c++에서는 .h없다.
using namespace std;

struct test
{
    int a;
    double b;
};



void SetTest(test* p)
{
    cout<<"숫자 입력>";cin>>p->a;
    cout<<"실수 입력>";cin>>p->b;
}

void ShowTest(test data)
{
    cout<<"test :"<<data.a<<","<<data.b<<endl;
}

int main()
{
    test ta;

    SetTest(&ta);
    ShowTest(ta);
}