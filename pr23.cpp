#include <iostream>
using namespace std;
class Number{
    int num;
    public:
    Number(int num){
        this->num=num;
    }
    Number operator ++(){
        return Number (++num);

    }
    Number operator ++(int){
        Number temp (num++);
        return temp;
    }
    bool operator ==(Number obj){
        if(num== obj.num){
            return true;
        }else {
            return false;
        }
    }
    Number operator +=(Number obj){
        return num+=obj.num;
    }
    void show(){
        cout <<num<<endl;
    }
};
int main(){
    Number n(120);
    Number n1(30);
    cout <<"prefix increament operatpor overloading"<<endl;
    Number n2=++n;
    n2.show();
    cout <<"post fix increamemnt operatorer"<<endl;
    n2=n++;
    n.show();
    n2.show();
    cout <<"check equal or not"<<endl;
    if(n==n1){
        cout <<"number are equl"<<endl;
        n.show();
        cout<<"==";
        n1.show();
    }else {
        cout <<"number are not eqaul"<<endl;
        n.show();
        cout <<"!=";
        n1.show();
    }
    cout <<"add the += use operator "<<endl;
    n2=n+=n1;
    n2.show();
    return 0;

}