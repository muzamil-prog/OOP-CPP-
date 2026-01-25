// function overloading
// compile time
#include <iostream>
using namespace std;
class muzammil{
    private:
     string name;
    int age;
     double salary;
     public:
    void show(string name){
         this->name=name;
        cout <<"name:"<<name<<endl;
    }
    void show(int age){
         this->age=age;
        cout <<"age:"<<age<<endl;
    }
    void show(double salary){
         this->salary=salary;
        cout <<"salary:"<<salary<<endl;
    }
};
int main(){
    muzammil m;
    m.show("ali");
    m.show(22);
    m.show(20000000);
    return 0;
}