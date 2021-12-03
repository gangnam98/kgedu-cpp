#include <iostream> //c++에서는 .h없다.
using namespace std;

int main(void)
{
    int data =0;
    int count=1;
    int sum=0;
    while(count<=3)
    {
        cout<<count<<"번째 입력>";
        cin>>data;
        if(data>=0)
        {
            sum+=data;
            ++count;
        }
    }
    cout<<"입력값의 합:"<<sum<<endl;
}