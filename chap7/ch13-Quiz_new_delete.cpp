#include <iostream>
#include <string>

using namespace std;

// Student class 를 정의하세요
// - 이름, 점수(cpp, java), 총점의 관리가 가능합니다.
class Student
{public:
    string name;
    int cpp;
    int java;
    int total;

    void input(){
        cout<<"이름 입력>"; cin>>name;
        cout<<"cpp 점수 입력>"; cin>>cpp;
        cout<<"java 점수 입력>"; cin>>java;
        calcTot();
    }
    void calcTot(){
        total=cpp+java;
    }

    void output(){
        cout.width(8); cout<<name;
        cout.width(8); cout<<cpp;
        cout.width(8); cout<<java;
        cout.width(8); cout<<total<<endl;
    }

};
/* void InputData(int arr[], int stu_length)
{
    for (int i = 0; i < stu_length; i++)
    {
        cout << "학생성적 입력>" << endl;
        cin >> arr[i];
    }
}

void OutputData(int arr[],int stu_length)
{
    for(int i=0;i<stu_length;i++){
        cout<<i<<"번 학생의 점수:"<<arr[i]<<endl;
    }
} */

int InputInteger(string message="숫자 입력>"){
    int value;
    cout<<message; cin>>value;
    return value;
}

/* Student* SetStudent(int length){
    return new Student[length];
} */

void InputPoint(Student arr[], int length){
    cout<<"----학생 성적 입력---"<<endl;
    for( int i=0; i<length; i++){
        cout<<"-"<<i+1<<"번 -"<<endl;
        arr[i].input();
    }
    cout<<endl;
}

void OutputPoint(Student arr[], int length){
    cout.width(8); cout<<"이름";
    cout.width(8); cout<<"CPP";
    cout.width(8); cout<<"JAVA";
    cout.width(8); cout<<"총점"<<endl;
    for(int i=0;i<length;i++){
        arr[i].output();
    }
    cout<<endl;
}



int main()
{
    int stu_length;    //학생수
    Student *stu = nullptr; //class Student 배열 위치

    //학생수를 설정합니다 : 3명
    stu_length=InputInteger("학생수 입력 > ");
    stu=new Student[stu_length];
    //학생수만큼의 class Student 배열을 동적할당 합니다
    //stu=SetStudent(stu_length);
    //전체 학생 성적을 입력합니다
    InputPoint(stu, stu_length);
    //전체 학생 성적을 출력합니다.
    OutputPoint(stu, stu_length);
    
    if (stu != nullptr)
        delete[] stu;
}