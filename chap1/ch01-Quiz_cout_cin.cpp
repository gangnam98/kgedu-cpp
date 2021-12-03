#include <iostream> //c++에서는 .h없다.
using namespace std;

int main(void)
{
    /*     char gender;
    
    while(1)
    {
        cout<<"what is you gender?>>";
        cin>>gender;
        if(gender=='m'||gender=='w')
        break;
    }
    if(gender=='m')
    {
        cout<<"남성";
    }
    else if(gender=='w')
    {
        cout<<"여성";
    } */

    /*   int num1,num2,num3;
    cout<<"숫자를 입력하세요:";
    cin>>num1>>num2>>num3;
    //cin의 반환값은 cin이다.
    cout<<"sum:"<<num1+num2+num3; */

    int arr[3] = {0};
    int sum = 0;
    int length = sizeof(arr) / sizeof(int);
    //arr은 포인터도 되면서 형식적으로 전체를 나타낼 수도 있음.
    //arr은 첫 번쨰 요소를 가리키면서 sizeof를 할때는 배열 전체를 의미한다. 하지만, arr[0]은 첫번쨰  요소만 가리킨다.
    for (int i = 0; i < length; ++i)
    {

        cout << i + 1 << "번째 숫자 입력";
        cin >> arr[i];
        if (arr[i] < 0)
        {
            --i;
        }
        else
        {
            sum += arr[i];
        }
    }
    cout << "입력값의 합:" << sum;
    
    
}