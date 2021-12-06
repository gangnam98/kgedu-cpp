#include <iostream>
#include <string>

using namespace std;
/* 
접근제한자
- class 외부에서 class안의 멤버에 접근을 허용할 지를 결정합니다.
- 종류
    > public  : class 내부, 외부 어디에서나 접근이 가능합니다.
    > private : class 내부에서만 접근이 가능합니다(class default 값)
    //접근제한자를 설정하지 않으면 private이 설정된다.
    >protected: 기본 성격은 private과 동일하게 내부에서만 접근이 가능하지만,
                class 상속시에는 하위(자식)class에서의 접근을 허용합니다.
                
은닉화
- 접근제한자를 사용해서 외부에서의 의도치 않은 접근으로 인한 데이터 손실을 방지합니다.
    >getter 메서드 : 멤버필드의 값을 사용(확인)하는 메서드
     setter 메서드 : 멤버필드의 값을 설정(수정)하는 메서드
 */
class Person
{
public:
    string getName() { return name; }
    void setName(const string &_name)
    {
        name = _name;
    }

    int getAge() { return age; }
    void setAge(const int &_age)
    {
        if (_age >= 0 && _age <= 130)
            age = _age;
        else
            cout << "나이는 0~130 사이만 가능합니다~" << endl;
    }

    void info()
    {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }

private:
    string name;
    int age;
};
//궁금한점:변수선언이 함수 아래 존재하는데 이렇게해도되나??
int main()
{

    Person manA;
    // manA.name="manA";
    // manA.age=20;
    // manA.age=-30;
    manA.setName("manA");
    cout << "이름 :" << manA.getName() << endl;
    manA.setAge(20);
    cout << "나이 : " << manA.getAge() << endl;
    manA.info();
    cout << endl;

    Person *manB = new Person;
    manB->setName("manB");
    manB->setAge(30);
    manB->info();

    delete manB;
}