#include <iostream> 
using namespace std;
class student;
class person{
    private:
    string name;
    int age;
    public:
    person(string name, int age){
        this->name=name;
        this->age=age;
    }
    friend class student;
};
class student:public person{
    private:
    int rollNo;
    public:
    student(string name, int age, int rollNo):person(name , age){
        this->rollNo=rollNo;
    }
    void show(person &obj){

        cout<<"name:"<<obj.name<<endl;
        cout <<"age:"<<obj.age<<endl;
        cout <<"roll no:"<<rollNo<<endl; 
    }
};
int main(){
    person p("ali", 22);
    student s("ali", 22, 33);
    s.show(p);
    return 0;
}