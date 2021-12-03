#include <iostream>//c++에서는 .h없다.
using namespace std;

int main()
{
    char name[]="문규상";//5바이트(한글은 2바이트)    
    /* char name[]="문규상";//7바이트 */
    int age=100;
    char blood[3]="AB";
    double height=123.4;
    std::cout<<"이름:"<<name<<std::endl;
    std::cout<<"혈액형:"<<blood<<"형"<<std::endl;
    std::cout<<"키 :"<<height<<"cm"<<std::endl;
}