#include <iostream>
//iostream=istream+ostream.
#include <cstring>//c에서 가져오는거
#include <string>//c++만의

using namespace std;



//Q-1. 하나의 문장을 입력받아서 반환하는 함수를 구현하세요
//Q-2. 문자 하나를 입력받아서 반환하는 함수를 구현하세요
//Q-3. 1번의 함수를 사용해서 입력받은 문자열에 2번의 문자가 몇개있는 지 구하는 코드를 작성하세요

 string InputString(string message){
    string value;
    cout<<message;
    getline(cin, value);
    return value;
}

bool LoginCheck(string id, string pw){

    for(int i=1; i<=3;i++){
        string userid=InputString("ID 입력>");
        string userpw=InputString("PW 입력>");
        if(id==userid&&pw==userpw)
            return true;
        else
            cout<<"ID or PW 오류~"<<endl;

    }
    return false;
}

int main(){
string id="test";
string pw="1234";

if(LoginCheck(id,pw))
cout<<id<<"님이 로그인 하셨습니다.."<<endl;
else
cout<<"관리자에게 문의하세요..ㅜㅜ"<<endl;
    
}



//Q-4. 로그인을 처리하는 함수를 구현하세요
//     로그인 확인시 사용하는 id, pw를 설정합니다.
//     로그인시 사용하는 id,pw를 입력받아서 저장된 값과 비교해서 성공여부를 알려줍니다.
//     로그인 시도는 3회까지만 가능합니다



/* string fun1(){
    string c1;
    cout<<"문장을 입력하세요>";cin>>c1;
    return c1;
}


int main(){
    
    string c2=fun1();
    
    cout<<c2<<endl;
} */


/* char InputCharacter(string message){
    char value;
    cout<<message; cin>>value;
    return value;
}

int FindCharacter(string text, char search){
    int count=0;
    for(int i=0; i<text.length();i++){
        if(text[i]==search){
            count++;           
        }
        
    }
return count;
}

int main(){
    string text=InputString("문장 입력>");
    char search=InputCharacter("검색 문자 입력 >");
    int count=FindCharacter(text,search);
    cout<<search<<"문자수:"<<count<<endl;
}  */





/* string fun1(){
    string c1;
    cout<<"문자를 입력하세요>";
    cin>>c1;

    return c1[1];
}


int main(){
    
    string c2=fun1();
    
    cout<<c2<<endl;
} */