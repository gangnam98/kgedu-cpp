#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
/* 
new  :  cpp 동적 할당
- new 자료형
  new 자료형[ 크기 ];
  
delete : 동적 할당 해제
-  delete 주소
   delete[] 주소

python이나 java도 동적할당을 쓰지만 메모리관리를 사용자가 안함
c나 c++은 동적할당을 쓰면서 메모리관리를 사용자가 관리한다.
 */

/* 
C++에서 포인터 초기화는 nullptr을 사용하는 것을 권장함
 */

/* 
메모리 용량 단위
byte(바이트)<KB(킬로바이트)<MB(메가바이트)<GB(기가바이트)
<TB(테라바이트)

 */
//------------------------------

/* class Data{
    public:
    int a;
    double b;

    void setData(int _a, double _b){
        a=_a;
        b=_b;
    }

    void showData(){
        cout<<"Data :"<<a<<" - "<<b<<endl;
    }
};

Data* AllocData(){
    return new Data;
}

int* AllocInt(){
    return new int;
}

double* AllocDouble(){
    return new double;
}

char* AllocChar(){
    return new char;
}

int main(){

    Data* pdata=AllocData();
    pdata->setData(11,2.2);
    pdata->showData();


    char* cp=AllocChar();
    *cp='A';
    cout<<"*cp :"<<*cp<<endl;

    double* dp =AllocDouble();
    *dp=2.3;
    cout<<"*dp :"<<*dp<<endl;

    int* p= AllocInt();
    *p=10;
    cout<<"*p: "<<*p<<endl;

    delete p;
    delete dp;
    delete cp;
    delete pdata;

} */
/* 
char *InputString(string message = "단어 입력 > ")
{
    char tmp[100];
    //char형 배열을 먼저 만든다.
    cout << message;
    cin.getline(tmp, sizeof(tmp));
    // heap 에 문자열 저장 공간 생성
    // heap으로 안넘기면 저장이 안됨
    char *hs = new char[strlen(tmp) + 1];
    //null값을 저장할 수 있는 공간이 1만큼 필요하다.
    strcpy(hs, tmp);
    return hs;
}

int InputInteger(string message, int start = 0, int end = 10)
{
    int value;
    while (true)
    {
        cout << message;
        cin >> value;
        cin.ignore(100, '\n');
        if (value >= start && value <=end)
            break;
    }
    return value;
}

int main(void)
{

    char *stn = nullptr;

    bool run = true;
    while (run)
    {
        int select = InputInteger("1.입력 2.출력>>");

        switch (select)
        {
        case 1: //입력
            if (stn != nullptr)
                delete[] stn;

            stn = InputString("문자열 입력>");
            break;
        case 2: //출력
            cout << stn << endl;
            break;
        case 0: //종료
            run = false;
        }
        cout << endl;
    }
    if(stn!=nullptr)
        delete[] stn;
    cout<<"- Program end -"<<endl;


     stn = InputString("문자열 입력> ");
    cout << "stn : " << stn << endl;

    delete[] stn; 
    return 0;
} */

int* SetArray(int length){
    return new int[length];


}

void InputArray(int arr[],int length){
    for(int i=0;i<length;i++){
        arr[i]=i+1;//*(arr+i)=i+1;
    
    }
}

void OutputArray(int arr[],int length){
    for(int i=0;i<length;i++){
        cout.width(7); cout<<arr[i];
        if((i+1)%10==0)
        cout<<endl;
    }
    cout<<endl;
}


int main(void){

    //int a[300000];

    //int size=3;
    //int arr[size];
    //stack영역에는 한번 정해지면 크기변동x

    int length=20;
    int* arr = nullptr;

    arr=SetArray(length);
    InputArray(arr,length);
    OutputArray(arr,length);
    if(arr!=nullptr)
        delete[] arr;

    //char arr[100];
    //c++에서 const로 정의되어 있으면 정의 가능.

    //cout<<"data 입력>";
    //cin.getline(arr,100);
    //cout<<arr;
    
}