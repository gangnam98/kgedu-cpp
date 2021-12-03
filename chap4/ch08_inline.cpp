#include <iostream>

using namespace std;

void BasicFunc(const char* message){
    cout <<message<<endl;
}

inline void InlineFunc(const char*message){
    cout<<message<<endl;
}

int main(){
BasicFunc("-일반 함수-");
cout<<endl;
InlineFunc("-inline 함수-");
//inline을 호출하면 변수가 이미 int main안에 들어와있다.


}