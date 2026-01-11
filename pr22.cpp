#include <iostream>
using namespace std;
 class Number{
    int num;
    public:
    Number(int num){
        this->num=num;
    }
    bool operator ==(Number obj){
       if ( num== obj.num)
       {
        return true;
        
       }else{
        return false;
       }
 
        

    }
    void show(){
        cout <<num<<endl;
    }
 };
 int main(){
    Number n1(20);
    Number n2(20);
    if(n1==n2){
    cout <<"numers are equal"<<endl;
    n1.show();
    cout<<"==";
    n2.show();
    }else{
        cout <<"number are not equal";
        n1.show();
        cout <<"!=";
        n2.show();
    }
    return 0;
 }