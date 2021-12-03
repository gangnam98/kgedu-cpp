#include <iostream>
#include <string>

using namespace std;

    //구구단 값을 넘겨받아서 해당 구구단 값 전체를 출력하는 함수를 작성하세요
    //넘겨받는 값이 없거나, 2~9 단 사이의 값이 아니면 무조건 9단이 출력됩니다.

    //1~n(넘겨받는 수)까지의 합을 구하는 함수를 구현하세요
    //넘겨받는 값이 없으면 1~10까지의 합을 계산합니다

    //급여를 계산하는 함수를 구현하세요
    // - 기본시간 : 40시간, 기본 시간당 급여 : 8590원
    // 기본 시간에 대한 급여와 시간에 따른 급여를 계산하는 코드를 작성하세요

int InputInteger(string message ="숫자 입력>"){
    int value;
    cout<<message; cin>>value;
    return value;
}

/* void GuGuDan(int num=9){
    cout<<"- "<<num<<" -"<<endl;
    for(int i=1;i<10;++i){
        cout<<num<<"x"<<i<<":"<<i*num<<endl;
    }
}

int main(){


    int num=InputInteger("구구단 입력>");
    
    if(num>=2&&num<=9){
        GuGuDan(num);
    }
    else
        GuGuDan();
} */

    //1~n(넘겨받는 수)까지의 합을 구하는 함수를 구현하세요
    //넘겨받는 값이 없으면 1~10까지의 합을 계산합니다

/* void SumFun(int num=10){
    int sum=0;
    for(int i=1;i<num+1;i++){
        sum+=i;
    }
    cout<<"1~"<<num<<"까지의 합:"<<sum<<endl;
}


int main(){
    int num=InputInteger();
    SumFun(num);
} */

    //급여를 계산하는 함수를 구현하세요
    // - 기본시간 : 40시간, 기본 시간당 급여 : 8590원
    // 기본 시간에 대한 급여와 시간에 따른 급여를 계산하는 코드를 작성하세요

/* void Payment(int time=40){
    cout<<"당신의 급여:"<<time*8590<<endl;
}


int main(){
    int time=InputInteger("노동 시간입력>");
    if(time<=40){
        Payment();
    }
    else{
        Payment(time);
    }
}
 */

int WageCalc(int time=40, int money=8590){
    int pay=time*money;
    cout<<"급여 :"<<pay<<" 원"<<endl;
    return pay;
}


int main(){
    int select =InputInteger("1.기본 급여 2.시간당 급여> ");
    int time=0;
    switch(select){
    case 1:
        WageCalc();
        break;
    case 2:
        time = InputInteger("일한 시간 입력>");
        WageCalc(time);
    }
    
}