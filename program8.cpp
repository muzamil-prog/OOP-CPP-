#include  <iostream>
using namespace std;
class base{
    public:
    void eat(){
        cout <<"this is function of base class"<<endl;
    }

};
class drive:public base{
    public:
    void m(){
        cout <<"this is a driv fuction "<<endl;

    }
};
int main(){
    drive ob;
    ob.eat();
    ob.m();
    return 0;
}
