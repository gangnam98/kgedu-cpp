#include <iostream> //c++에서는 .h없다.
using namespace std;

int InputData()
{
    int data;
    while (true)
    {
        cout<<"숫자 입력>";cin>>data;
        if(data>=0)
        break;
    }
    return data;
}

int OddCheck(int data)
{
    return(data%2==1)?true:false;
}

int main()
{
    int data =InputData();

    if  (OddCheck(data))
        cout<<"홀수";
    else
        cout<<"짝수";
    cout<<endl;
}