// pass object as parameter to member function 
// it is same as   we pass the variable to function
#include <iostream>
using namespace std;
class Travel{
    private:
    int killometers;
    int hours;
    public:
    Travel(){
        killometers=0;
        hours=0;
    }
    void get(){
        cout <<"Enter the killometer to travel:"<<endl;
        cin >> killometers;
        cout <<"Enter the hours of travel:"<<endl;
        cin >> hours;
    }
    void show(){
        cout <<"you travel the:"<<killometers<<"killometer in:"<< hours<<endl;
    }
    void add(Travel p){
        Travel t;
        t.killometers= killometers+p.killometers;
        t.hours= hours+p.hours;
        cout <<"total traveling:"<< t.killometers<<"killometer in:"<<t.hours<<endl;
    }
};
int main(){
    Travel t1, t2;
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    t1.add(t2);
    return 0;
}