#include <iostream>
#include <string>

using namespace std;
/* 
디폴트 매개변수 (default parameter)
- 매개변수에 기본값을 설정하는 것입니다.
- 함수 호출시에 전달되는 값이 있으면 해당 인자값을 사용해서 함수를 실행하고,
전달되는 값이 없으면 매개변수가 가진 기본값을 가지고 함수를 실행합니다.
지금 현재 함수에 "데이터 입력>"이라는 기본값을 가지고 있다.
 하나의 함수에서 여러개의 함수를 정의한 효과가 나오게 됨
-디폴트 매개변수 값은 매개변수의 오른쪽에서부터 설정한다.
-함수를 선언과 정의부로 나누어서 구현할 때에는 디폴트 매개변수의 설정은 선언부에만 작성한다. 
 */
/* int MessageInputInt(string message="데이터 입력>"){

    int value;
    cout<<message; cin>>value;
    return value;
}

int main(){
    int ia= MessageInputInt("숫자 입력>");
    
    int ib=MessageInputInt();
    //아무것도 안주면 기본값으로 들어가서 실행된다.
} */

/* int MultiValue(int n=2, int e=2){
    int res=n;
    for(int i=1;i<e;i++){
        res*=n;
    }
    return res;
}
//default 매개변수의 설정은 무조건 오른쪽부터 해라
//왜?? 변수의 대입은 왼쪽부터 되기 떄문에...
int main(){

    cout<<MultiValue()<<endl;
    cout<<MultiValue(3)<<endl;
    cout<<MultiValue(3,3)<<endl;
} */


int MultiValue(int n=2, int e=2);
//함수의 선언과 구현부해서 나눌떄는 선언문에만 default값을 넣어준다.
int main(){

    cout<<MultiValue()<<endl;
    cout<<MultiValue(3)<<endl;
    cout<<MultiValue(3,3)<<endl;

    int data, e;
    cout<<"숫자 입력>"; cin>>data;

    int select;
    cout<<"1.제곱 2.지수승 >"; cin>>select;
    switch(select){
    case 1:
        cout<<MultiValue(data)<<endl;
        break;
    case 2:
        cout<<"지수승 입력>"; cin>>e;
        cout<<MultiValue(data, e)<<endl;
    }
}

int MultiValue(int n, int e){
    int res=n;
    for(int i=1;i<e;i++){
        res*=n;
    }
    return res;
}