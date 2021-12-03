#include <iostream>
#include <string>

using namespace std;
//std라는 클라스에 있는 함수들을 사용하겠다.

class Student
{
public:
    string name;
    int cpp;
    int java;

    void intput()
    {
        cout << "이름 입력>" << endl;
        cin >> name;
        cout << "cpp 점수 입력>" << endl;
        cin >> cpp;
        cout << "java 점수 입력>" << endl;
        cin >> java;
    }
    void output()
    {
        cout.width(8);
        cout << name;
        cout.width(8);
        cout << cpp;
        cout.width(8);
        cout << java;
        cout.width(8);
        cout << cpp + java << endl;
    }
};

int InputInteger(string message = "숫자 입력>")
{
    int value;
    cout << "학생수 입력 >";
    cin >> value;
    return value;
}
void InputPoint(Student *stu, int stu_length)
{
    cout << "----학생 성적 입력----" << endl;
    for (int i = 0; i < stu_length; i++)
    {
        cout << "-" << i + 1 << "번-" << endl;
        stu[i].intput();
    }
}
void OutputPoint(Student *stu, int stu_length)
{
    cout << "이름    "
         << "cpp       "
         << "JAVA       "
         << "총점       " << endl;
    for (int i = 0; i < stu_length; i++)
    {
        stu[i].output();
    }
}

int main()
{
    int stu_length;         //학생수
    Student *stu = nullptr; //class Student 배열 위치

    //학생수를 설정합니다 : 3명
    stu_length = InputInteger("학생수 입력 > ");
    stu = new Student[stu_length];
    //학생수만큼의 class Student 배열을 동적할당 합니다
    //stu=SetStudent(stu_length);
    //전체 학생 성적을 입력합니다
    InputPoint(stu, stu_length);
    //전체 학생 성적을 출력합니다.
    OutputPoint(stu, stu_length);

    if (stu != nullptr)
        delete[] stu;
}