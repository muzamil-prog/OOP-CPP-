#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
  person(string name, int age){
        this->name=name;
        this->age=age;
    }
};
class student:public person{
    public:
    string dep;
    student(string dep, string name, int age):person(name,age){
        this->dep=dep;
    }
};
class teacher:public person{
    public:
    string dep;
    string subject;
    teacher(string subject, string dep, string name, int age ):person( name,age){
        this->subject=subject;
        this->dep=dep;
    }
    void show()const{
        cout <<"name:  "<<name<<endl;
        cout <<"age:   "<<age<<endl;
        cout <<"department:  "<<dep<<endl;
        cout <<"subject:   "<<subject<<endl;
    }
};
int main(){
    teacher t1("ali","it","muzamil",22);
    t1.show();
    return 0;
}