#include <iostream>
using namespace std;
class operation{
    public:
   virtual void cals(int a, int b){
        cout <<"perform operation"<<endl;
    }
};
class subtraction: public operation{
    public:
    void cals(int a, int b) override{
        cout <<"subtraction is:"<<a-b<<endl;

    }
};
int main(){
    operation* p;
    subtraction s;
    p=&s;
    p->cals(22,33);
    return 0;
}