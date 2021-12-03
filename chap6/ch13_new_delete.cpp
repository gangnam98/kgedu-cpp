#include <iostream>
#include <string>

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
void LifeCycle(){
    int a =10;

    int* p=new int;
    *p=10;

}


int main(){
LifeCycle();
    
}