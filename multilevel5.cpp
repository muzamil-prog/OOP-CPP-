#include <iostream>
 using namespace std;
 class person{
    public:
    string name;
    int  age;
    person( const string& name, int age){
        this->name=name;
        this->age=age;
    }
 };
 class student:public person{
    public:
  
    int rolNo;
    student( const string& name, int age, int rolNo):person(name, age){
        this->rolNo=rolNo;
    }

 };
 class departmentStudent:public student{
    public:
    string department;
    departmentStudent( const string& department ,string name , int age, int rolNo):student(name, age, rolNo){
        this->department=department;
    }
    void show() const{
        cout <<"name: "<<name<<endl;
        cout <<"age: "<<age<<endl;
        cout <<"roll no: " <<rolNo<<endl;
        cout <<"department: "<<department<<endl;

    }

 };
 int main(){
    departmentStudent students("it", "ali", 33, 22);
    students.show();
    return 0;
 }