#include <iostream>
using namespace std;
class vihcle{
    public:
     virtual void start(){
        cout <<"vihcle are start"<<endl;
    }
};
class motersyle: public vihcle{
    public:
    void start()override{
        cout <<"moter sysle are start"<<endl;

    }
};
class truck: public vihcle{
    public:
    void start()override{
        cout <<"truck are start"<<endl;
    }
};
int main(){
    vihcle*ar[2];
    motersyle m;
    truck t;
    ar[0]=&m;
    ar[1]=&t;
    ar[0]->start();
    ar[1]->start();
    return 0;
}