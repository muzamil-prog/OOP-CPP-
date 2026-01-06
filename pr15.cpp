#include <iostream>
using namespace std;
class base{
    public:
  virtual  ~base(){
        cout <<"this is derstructer of base class"<<endl;

    }
};
class drived:public base{
    public:
    ~drived(){
        cout <<"this is destructer of the drived class"<<endl;
    }
};
int main(){
    base* p;
    p= new drived;
    delete p;
    return 0;
}