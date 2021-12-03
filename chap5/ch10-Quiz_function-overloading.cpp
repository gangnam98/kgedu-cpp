#include <iostream>
#include <string>

using namespace std;

// 반환값 없이 동일한 이름으로 여러형태의 값을 입력하는 함수를 구현하세요.
// -정수, 문자, 정수배열

// 같은 타입의 데이터 두개의 값을 넘겨받아서 교환하는 함수를 구현하세요
// -정수, 문자

void ShowValue(int value){
    cout<<"ShowValue(int) :"<<value<<endl;
}

void ShowValue(char value){
    cout<<"ShowValue(char) :"<<value<<endl;
}

void ShowValue(int* value,int length){
    for(int i=0;i<length;i++){
        cout<<"ShowValue(int*) :"<<value[i]<<endl;
    }
}

int main(){
    int va=10;
    char c1='a';
    int str[5]={1,2,3,4,5};
    int length=sizeof(str)/sizeof(int);
    ShowValue(va);
    ShowValue(c1);
    ShowValue(str,length);
    //배열을 다른 함수에서 출력할때는 길이값을 먼저 구해서 넘겨준다.
}