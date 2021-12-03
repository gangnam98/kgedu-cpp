#include <iostream> //c++에서는 .h없다.
using namespace std;

int main(void)
{
/* int va;
cout<<"숫자 입력>";
cin>>va;
cout<<"va :"<<va<<endl;
cout<<endl; */

/* char text[20]={0};
cout<<"문자 입력:";
cin>>text;
cout<<"text>"<<text;
cout<<"text>"<<text;
cout<<"text>"<<text<<endl;
cout<<"text>"<<text;
 */
int last;
cout<<"마지막수 입력:";
cin>>last;

int tot=0;
for (int i=1; i<=last; i++)
{
    tot+=i;
}
cout<<"total sum:"<<tot;

}