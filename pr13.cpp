#include <iostream>
using namespace std;
class base{
    public:
   virtual void show(){
        cout <<"this is  base class"<<endl;
    }
};
class drived:public base{
    public:
    void show() override{
        cout <<"this is a derivied class"<<endl;

    }
};
int main(){
    drived *ptr;
    ptr=new drived;
    ptr->show();
    return 0;
}