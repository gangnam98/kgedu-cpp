#include <iostream>
#include <string>

using namespace std;

/* 
Shoes class를 정의하고 main()에서 테스트 하세요
- 필드 : 제조회사, 모델명, 사이즈, 가격
  기능 : 각각의 필드값 설정, 사용 가능
            >제조회사 : 10글자 이내
             사이즈   : 200~300mm만 가능
             가격    : -(마이너스) 값 사용 불가
 */
class Shoes
{

public:
    string getCompany() { return company; };
    void setCompany(const string& _company)
    {
        
        if (_company.length() <11 ){
                company = _company;
        }
        
        
    }
    int getSize() { return size; };
    void setSize(const int _size)
    {
       
        if (_size > 300 || _size < 200)
        {
            cout << "Please rewrite your shoes size!" << endl;
        }
        else
        {
            size = _size;
        }
    }
    int getPrice() { return price; };
    void setPrice(int _price)
    {
        if (_price >=0)
        {
            price = _price;
        }
        
            
        
    }
    void info()
    {
        cout << "company :" << company << endl;
        cout << "size :" << size << endl;
        cout << "price :" << price << endl;
    }

private:
    string company;
    int size;
    int price;
};

int main()
{
    Shoes shoes;
    shoes.setCompany("Nike");
    shoes.setSize(275);
    shoes.setPrice(38000);
    shoes.info();

    //동적 할당
    Shoes* proB = new Shoes;
    proB->setCompany("아디다스");
    proB->setSize(230);
    proB->info();

    delete proB;
}