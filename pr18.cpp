#include <iostream>
using namespace std;
class animal{
    public:
    virtual void eat()=0;// pure virtual function 
};
class dog: public animal{
    public:
    void eat(){
        cout <<"dog eat chicked"<<endl;
    }
};
int main(){
    animal*p;
    dog d;
    p=&d;
    p->eat();
    return 0;
}