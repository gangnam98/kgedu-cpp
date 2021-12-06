#include <iostream>
#include <string>

using namespace std;

/* 
reference 변수(참조자)
- 기존에 선언된 변수(객체) 공간에 이름을 추가합니다.
- reference 변수는 자료형 뒤에 '&'기호를 붙여서 선언합니다.
 */

//함수의 반환값이 reference가 될 수 있다.
//또한 reference를 통해 reference를 초기화 시킬수 있다.
//reference는 선언과 동시에 반드시 초기화 시켜줘야함
//reference는 null값을 선언x




/* int main(){

int a=10;
int& ra=a;
cout<<"a :"<<a<<" - ra : "<<ra<<endl; 
a=30;
cout<<"a :"<<a<<" - ra : "<<ra<<endl; 

cout<<"a 주소:"<<&a<<endl;
cout<<"ra 주소:"<<&ra<<endl;

//a 주소:0x7ffee2b477ec
//ra 주소:0x7ffee2b477ec
} */

/* int main(){

    int n=5;
    int& rn=n;
    int& sn=rn;
    cout<<"n :"<<n<<" -rn:"<<rn<<"-sn:"<<sn<<endl;

    sn=10;
    cout<<"n :"<<n<<" -rn:"<<rn<<"-sn:"<<sn<<endl;
} */


//-----------------------------------

/* int& IncreaseData(int& ref){
    ++ref;
    return ref;
}


int main(){

    int value=5;
    int& rv= IncreaseData(value);
    cout<<"value :"<<value<<" - rv :"<<rv<<endl;
    cout<<endl;

    ++rv;
    cout<<"vlaue :"<<value<<" - rv :"<<rv<<endl; 
    cout<<endl;


    int value2=5;
    int z=IncreaseData(value2);
    ++z;
    cout<<"vlaue :"<<value2<<" - rv :"<<rv<<endl;
    //여기서는 z에 reference가 넘어가는게 아니라 6이라는 값이 넘어가는 것이다.
    //int&A=int b이렇게 되면 reference를 넘기는거
    //int =int& b이렇게 하면 x(값만 넘김)
} */

//------------------------------------

//반환타입이 값의 형태이면, 그 값을 레퍼런스로 받을 수 없다.
//반환타입이 레퍼런스 형태이면, 그 값은 레퍼런스와 변수 모두 받을 수 있다.
// int Increase(int& ref){
//     ++ref;
//     return ref;
// }



// int main(){

//     int data =5;

//     int m = Increase(data);
//     cout<<"data : "<<data<<" -m:"<<m<<endl;
    
//     int& b=Increase(data);
    
//     int d=Increase(data);
//     int& c=data;
//     //->이 둘의 차이가 뭔지??
//     //함수의 반환값이
// }

//----------------------------------
// void ShowData(int& a, int& b){
//     cout<<a<<" - "<<b<<endl;
// }

// void SwapData(int* r1, int* r2){
//     int tmp =*r1;
//     *r1=*r2;
//     *r2=tmp;
// }

// int main(){

//     int ia=10;
//     int ib =5;
//     ShowData(ia,ib);

//     SwapData(&ia, &ib);
//     ShowData(ia,ib);

//     SwapData(ia,ib);
//     ShowData(ia,ib);


// }

//----------------------------------------

// class Test{
//     public:
//     string a;
//     int b;
//     double c;
// };

// void ShowTest(Test t){
    
// }

// void ShowTest(const Test& t){
    
// }
//매개변수로 reference를 많이 쓰는 이유
//크기도 줄어들고 안정적이기 때문
//대신 reference로 받으면 함수내에서 변수값을 바꿀 수 있다는 주의사항이 있음
//그래서 const로 받음으로서 그 변수를 차단시키면 된다.
// int main(){

//     Test t;
//     t.a="0123456789";
//     t.b=10;
//     t.c=2.2;
//     long d;
//     printf("%lu %lu %lu",sizeof(t),sizeof(t.a),sizeof(d));
// }
//--------------------------------------------

class Member{
    public:
    string name;   //    회원이름
    double height; //    키(cm)
    double weight; //    몸무게(kg)
    double bml;    //    체질량 지수
};

//회원정보를 관리하는 Manager class를 정의하고 main() 에서 테스트 하세요

class Manager{
    public:
    int bml;
        //  회원 정보 입력
    void setMember(Member& manA){
        cout<<"name>";cin>>manA.name;
        cout<<"height>";cin>>manA.height;
        cout<<"weight>";cin>>manA.weight;
        setBml(manA);     
    }
    //  체질량 지수 = 몸무게 / (키(m)* 키(m))
    void setBml(Member& manA){
        double mHeight=manA.height/100;
        manA.bml=manA.weight/(mHeight*mHeight);
    }
    
    //회원 정보 출력  
    //if you don't change the information, use const!!
    void info(const Member& manA){
        cout<<"------회원 정보-------"<<endl;
        cout<<"이름:"<<manA.name<<endl;
        cout<<"키:"<<manA.height<<endl;
        cout<<"몸무게:"<<manA.weight<<endl;
        cout<<"체질량 지수:"<<manA.bml<<endl;
    } 
};

int main(){
    Member manA;
    Manager manager;
    manager.setMember(manA); //정보 입력
    manager.info(manA);      //정보 출력
    cout<<endl;

    Member* manB = new Member;
    manager.setMember(*manB);
    //주소를 참조할수는 없으니까 실재 객체를 보내줘야한다.
    //만약에 setMember(Menber* manB)이렇게 되어있었으면
    //setMember(manB)로 하고 아래 역참조로 manA->bml이렇게 하면 되긴함.
    manager.info(*manB);
    delete manB;

    return 0;
}
