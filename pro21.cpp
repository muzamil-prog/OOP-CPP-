#include <iostream>
#include <string>
using namespace std;
class BankAcount{
    private:
    string depositName;;
    int acountNo;
    string typeAcount;
    double balance;
    public:
    BankAcount(){}
    BankAcount(string dn, int an, string ta, double b){
        depositName=dn;
        acountNo=an;
        typeAcount=ta;
        balance=b;
    }
    double depositAmount(double amount){
    
        balance= balance+amount;
        
        cout<<"your current balance is:"<<balance<<endl;
    }
    double withdrawAmount(double amount){
        
        if(amount<=balance){
            balance=balance-amount;
        
        cout <<"your current balance is after withdraw the amount"<<balance<<endl;

        }else {
            cout<<"sorry your balance in insignficent"<<endl;
        }

    }
    void show(){
        cout <<"Name:"<<depositName<<endl;
        cout<< "Balance:"<<balance<<endl;
    }
    BankAcount& operator +(BankAcount d){
        BankAcount temp;
        balance=balance+d.balance;
         return *this;
    }
};
int main(){
    BankAcount acc1("muzammil", 1234, "bank acount", 2000), acc2("ali", 3489, "bank acount", 3000), acc3;
    acc3=acc1+acc2;
    cout <<"acount 1 details:"<<endl;
    acc1.depositAmount(5000);
     acc1.withdrawAmount(2000);
    acc1.show();
    cout <<"acount 2 details:"<<endl;
     acc2.depositAmount(7000);
     acc2.withdrawAmount(3000);
    acc2.show();
    cout <<"acount 3 deatils:"<<endl;
    acc3.show();

}

// define class fro a bank acount tahat includes the following data meber  name fo the depositor , acount number , type of acount , balnce amount in the acount and also contain the member function a constructer to intialixe the values , depsoit function to deposit some amount . it should accept the amount parameter , withdraw function to withdraw an  amount. after checking the balance it should take  parameter to accept the amount as parameter and diplay function to display name and balance  overload binery + operator that adds the balance of one account to another acount. it should accept an object as parameter and add the values of the parameter to the calling object