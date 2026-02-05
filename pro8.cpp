//friend class some time we need to acess private data memeber or function so we used friend class  friend keyword is used so the friend ship is mutual no both side it means one side friend ship 
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
    A(){
        a=10;
        b=30;
    }
    friend class B;
};
class B{
    public:
    void showA(A obj){
        cout <<"the value of a is:"<<obj.a<<endl;
    }
    void showB(A obj){
        cout <<"the values of be is:"<<obj.b<<endl;
    }
};
int main(){
    A x;
    B y;
    y.showA(x);
    y.showB(x);
    return 0;
}