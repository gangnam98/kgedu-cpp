#include <iostream> //c++에서는 .h없다.
using namespace std;

class Academy
{
    public:
        char name[20];  //이름
        int cpp;        //점수
        int java;
        int tot;        //총점
};

int RangeInputInt(const char*message, int start, int end);
int FindMax(int a, int b);
void ShowData(Academy* man);
void SetData(Academy* man);

int main()
{
    Academy stu;

    SetData(&stu);
    ShowData(stu);
}

void ShowData(Academy man)
{
    cout<<"----- 학생 정보 ---"<<endl;
    cout<<"이름  :"<<man.name<<endl;
    cout<<"CPP :"<<man.cpp<<endl;
    cout<<"JAVA  :"<<man.java<<endl;
    cout<<"총점  :"<<man.tot<<endl;
}

void CalcTot(Academy* man)
{
    man->tot =man->cpp+ man->java;
}

void SetData(Academy* man)
{
    cout<<"이름 입력>";cin>>man->name;
    cout<<"CPP 점수 입력>";cin>>man->cpp;
    cout<<"JAVA 점수 입력>";cin>>man->java;
    CalcTot(man);
}
int FindMax(int a,int b)
{
    if(a>b)return a;
    else if(b>a)return b;
    else return 0;
}

int RangeInputInt(const char* message,  int start, int end)
{
    int value;
    while(1)
    {
        cout<<message; cin>>value;
        if(value>=start&&value<=end)
            break;
    }
    return value;
}