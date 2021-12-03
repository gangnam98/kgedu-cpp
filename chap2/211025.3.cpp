#include <iostream> //c++에서는 .h없다.
using namespace std;

/* namespace
-식별자(변수,함수)에게 공간을 제공해서  이름 충돌을 방지하는데 사용 */

/* namespace partA
{
    int data =1;
}

namespace partB
{
    int data =10;
}

int main()
{
    cout<<"partA::"<<partA::data<<endl;
    cout<<"partB::"<<partB::data<<endl;

    int data=0;
    cout<<"main data::"<<data<<endl;

    partB::data=200;
    cout<<"new partB::"<<partB::data<<endl;
} */

/* 
using 지시문
-namespace의 식별자를 편리하게 사용할 수 있다.
 */
//using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    cout<<"숫자 입력>";
    cin>>n;
    cout<<"n :"<<n<<endl;

    
}
