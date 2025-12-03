
// data member access from base to drive class in this code


#include <iostream>
using namespace std;
class base{
    public:
    int x=8;
};
class drive:public base{
    public:
    void show(){
        cout <<"the value of x is="<<x<<endl;
    }
};
int main(){
    drive ob;
    ob.show();
    return 0;
}