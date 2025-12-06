// inhertance help extend the functionality

#include <iostream> 
using namespace std;
class vehicle{
    public:
    void start(){
        cout <<"vehucke stats movung "<<endl;

    }
};
class Car:public vehicle{
    public:
    void accelerate(){
        cout <<"car accelerates on road"<<endl;
    }
};
int main(){
    Car c;
    c.start();
    c.accelerate();
    return 0;
}