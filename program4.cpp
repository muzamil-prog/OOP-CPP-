// constructer in base and drive class


#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout <<"base class constructer is called"<<endl;
    }
};
class drive: public base{
    public:
    drive(){
        cout <<"the drive class constructer is called"<<endl;
    }
};
int main(){
    drive ob;
    return 0;
}