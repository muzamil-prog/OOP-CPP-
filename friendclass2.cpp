#include <iostream>
using namespace std;
class student;
class person{
    private:
    string name;
    public:
    person(string name){
        this->name=name;
    }
    friend class student;
};
class student{
    private:
    int age;
    public:
    student(int age){
        this->age=age;
    }
    void show(person &obj){
        cout <<"name:"<<obj.name<<endl;
        cout <<"age:"<<age<<endl;
    }
};
int main(){
    person p("ali");
    student s(11);
    s.show(p);
    return 0;
}