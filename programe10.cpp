#include <iostream>
using namespace std;
class bankAcount{
    private:
    float balance;
    
    public:
    bankAcount():balance(0){}
    bankAcount(float balance){
        this->balance=balance;
    
    }
    

    bankAcount depsite(double amount){
        bankAcount result;
        cout<<"enter your amount"<<endl;
        cin >> amount;
        result.balance= balance+amount;
        return result;
    }
    void show(){
        cout <<"the total balace is after depsite the amount:"<<balance<<endl;
    }
};
int main(){
    bankAcount b1(1000), b2;
    b2= b1.depsite(500);
    b2.show();
    return 0;

}