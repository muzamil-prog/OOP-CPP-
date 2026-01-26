#include <iostream>
using namespace std;
class  car{
    public:
    int speed;
    car(int speed){
        this->speed=speed;
    }
  void  show(){
        cout <<"speed is"<<speed<<endl;
    }
};
int main(){
    car*ptr;
    ptr= new car(12);
    ptr->show();
    return 0;

}