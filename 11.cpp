#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculater{
    public:
    double a;
    double b;
    void setValue(){
        cout <<"enter the first number :"<<endl;
        cin>>a;
        cout <<"enter the scond number:"<<endl;
        cin>> b;
    }
    void calculate(char op){
        switch(op){
            case '+':
            cout <<"result :"<<a+b<<endl;
            break;
            case '-':
            cout <<"result:"<<a-b<<endl;
            break;
            case '*':
            cout <<"result:"<<a*b<<endl;
            break;
            case '/':
            if(b !=0){
                cout <<"result :"<<a/b<<endl;

            }else{
                cout <<"invailed you divide with zero"<<endl;
            }
            break;
            default:{
                cout <<"invalide you enter the invalide operater"<<endl;

            }
        }
    }
};
class scientficCalculater:public simpleCalculater{
    public:
  void scientficCalculate(string op){
    if(op=="sin"){
        cout <<"result:"<<sin(a)<<endl;

    }else if(op=="cos"){
        cout<<"result:"<<cos(a)<<endl;
    }else if(op=="tan"){
        cout <<"result:"<<tan(a)<<endl;
    }
    else {
        cout <<"you enter in valide operater"<<endl;
    }
  }
};
int main(){
    scientficCalculater calc;
    int choice;
    cout <<"==========chose menu==========="<<endl;
    cout <<"1 ..=== simple calculater==="<<endl;
    cout <<"2..=== scientfic calculater==="<<endl;
    cout <<"enter you choice:"<<endl;
    cin >>choice;
    if(choice==1){
        char op;
        calc.setValue();
        cout <<"enter the operater:  +  = -  =   *  =  /"<<endl;
        cin >> op;
        calc.calculate(op);
    }else if(choice == 2){
        string op;
        calc.setValue();
        cout <<"enter you operater you want to calculate:  =sin==cos==tan"<<endl;
        cin >>op;
        calc.scientficCalculate(op);
    }else {
        cout <<"you enter the invalide choice please enter the valid choice"<<endl;

    }
    return 0;
}