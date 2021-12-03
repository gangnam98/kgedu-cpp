#include <iostream>
//iostream=istream+ostream.
#include <cstring>//c에서 가져오는거
#include <string>//c++만의

using namespace std;

/*  int main()
{
    string text ="strig data";
    cout<<"text text"<<endl;
    cout<<endl;

    text="수정가능";
    cout<<"text :"<<text<<endl;
    cout<<endl;

    string data="abc";
    cout<<"data :"<<data<<endl;
    cout<<"data[0]:"<<data[0]<<endl;
    data.operator[](3)==data[3];
    //data[]!=test[]이기 때문에 operator[]은 data하위 메서드안으로 들어가야한다.
    cout<<"data 전체 크기:"<<data.capacity()<<endl;
  data="0123456789abcde";
    cout<<"data 전체 크기:"<<data.capacity()<<endl;
    //capacity함수는 확보해놓은 메모리의 양을 의미한다.이미 22만큼을 확보해놓았기때문에 data를 줄여도 22가 나오는거다.
    //남발하면 메모리 낭비가 심해진다.
} */

/* int main(){
    string stnA;
    ->string클라스로 만든 stnA객체
    cout<<"단어 입력>";
    cin>>stnA;
    ->istream클라스로 만든 cin객체
    cout<<"stnA :"<<stnA<<endl;
    cout<<endl; 

    string stnB;
    cout<<"문장 입력>";
    cin.ignore(100,'\n');
    //ignore안쓰면 \n가있어서 그냥 넘어가 버린다.
    getline(cin,stnB);
    //getline(입력스트림 오브젝트, 문자열을 저장할 string객체, 종결 문자);
    //종결문자는 지정하지 않으면 /n으로 인식.
    //getline(cin,str);
    cout<<"stnB :"<<stnB<<endl;

    //cin은 입력 스트림에 대응을 시킬수있는 객체

} */

/* int main(){
    string ta="new";
    string tb="cpp";
    string title=ta +" "+tb;
    cout<<"title :"<<title<<endl;
    
} */

bool AnswerCheck(string s1,string s2)
{
    return s1==s2;
}


int main(){
    string quiz ="dog";
    string answer;

    cout<<"강아지 단어 입력"<<endl;
    cout<<"힌트 : 첫글자("<<quiz[0]<<")"<<endl;
    cin>>answer;
    if(AnswerCheck(answer,quiz))
    {
        cout<<"Your answer is correct!!"<<endl;
    }
    else
    {
        cout<<"Try again!!"<<endl;
    }

    



}