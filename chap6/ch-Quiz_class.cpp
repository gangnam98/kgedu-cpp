#include <iostream>
#include <string>

using namespace std;

/* 
Product class를 정의하고, main()함수에서 테스트 하세요
- 제품종류, 제품이름, 제품가격 관리가 가능합니다.
 */
/* class Product{
public:
    int data;
    
    void type(){
        cout<<"This product type is food"<<endl;
    }
    void name(){
        cout<<"This product name is Kimchi"<<endl;
    }
    void price(){
        cout<<"This product price is ₩7000"<<endl;
    }
};


int main(){

Product pro;
pro.data=10;
cout<<pro.data<<endl;
pro.type();
pro.price();
pro.name();
return 0;

} */

//class쓸때 먼저 변수를 다 선언해 놓고 함수설정을 하고 위 변수를 업데이트시켜서 불러오는 형식으로 작성한다.

class Product{
public:
    string kind;
    string name;
    int price;

    void input(){
        cout<<"제품 종류 입력>"; cin>>kind;
        cout<<"제품 이름 입력>"; cin>>name;
        cout<<"제품 가격 입력>"; cin>>price;
    }
    void setProduct(string _kind="none",string _name="none", int _price=0){
        kind=_kind;
        name=_name;
        price=_price;
    }

    void info(){
        cout<<"===제 품 정 보===="<<endl;
        cout<<"종류:"<<kind<<endl;
        cout<<"이름:"<<name<<endl;
        cout<<"가격:"<<price<<"원"<<endl;
    }
};



int main(){
    Product proA;
    proA.input();
    proA.info();
    cout<<endl;

    Product proB;
    proB.setProduct("유제품","땡땡 우유",1400);
    proB.info();



}