#include <iostream> //c++에서는 .h없다.
using namespace std;

int main()
{
    int ar[3]={1,2,3};
    int* p=ar;
    for(int i=0;sizeof(ar)/sizeof(int);++i)
    {
        cout<<"ar["<<i<<"] :"<<ar[i]<<","<<*(ar+i)<<", "<<endl;

    }
    cout<<endl;

    //ar+=1;(안됨)(배열의 위치가 바뀐다는 것은 말이 안된다.)
    //p+=1;은 된다.(포인터 변수)(배열의 시작주솟값을 잠시 넣어놓은 것이기때문에 변화 가능)
    //->포인터와 배열에대한 공부가 필요하다.

}