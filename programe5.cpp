#include <iostream>
using namespace std;
class employee{
    string name;
    double salary;
    public:
 void   setValue(string n, double s){
        name=s;
        salary=s;
    }
    void show(employee &obj){
        cout <<"name:"<<obj.name<<endl;
        cout <<"salary is:"<<obj.salary<<endl;
    }
};
int main(){
    employee e1;
    e1.setValue("ali", 20000000);
    e1.show(e1);
    return 0;
}