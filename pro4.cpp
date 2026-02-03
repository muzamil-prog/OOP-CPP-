// a return the object from member function
// so the return type and class name is same which type of retrun the onject 
#include <iostream>
using namespace std;
class Travel{
    private:
    int km;
    int hours;
    public:
    Travel(){
        km=0;
        hours=0;
    }
    void get(){
        cout <<"Enter the kilometer to travel:"<<endl;
        cin >>km;
        cout <<"Enter the hours to travel:"<<endl;
        cin>>hours;
    }
    void show(){
        cout <<"your travel :"<<km<<"killometer in:"<<hours<<endl;
    }
    Travel add(Travel p){
        Travel t;
        t.km= km+p.km;
        t.hours=hours+p.hours;
        return t;
    }
};
int main(){
    Travel t1 , t2, t3;
    t1.get();
    t1.show();
    t2.get();
    t2.show();
    t3=t1.add(t2);
    cout <<"total traveling is as follows :"<<endl;
    t3.show();
    return 0;

}