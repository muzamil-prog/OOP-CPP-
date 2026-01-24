#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }

};
class Student:public Person{
    public:
    string department;
    Student(string department, string name , int age):Person(name, age){
        this->department=department;
    }

};
class GratuateStudent:public Student{
    public:
    double CGPA;
    string thises;
    GratuateStudent( double  CGPA,string thises, string department, string name, int age):Student(department, name, age){
        this->thises=thises;
        this->CGPA=CGPA;
    }
    void DetailShow(){
        cout <<"name:  "    <<name   <<endl;
        cout <<"age:  "    <<age  <<endl;
        cout <<"department:  "    <<department  <<endl;
        cout <<"CGPA:  "    <<CGPA   <<endl;
        cout <<"thises:  "    <<thises   <<endl;

    }

};
int main(){
    GratuateStudent g1(3.7,"GOOD ","CS", "Ali", 22);
    g1.DetailShow();
    GratuateStudent g2(3.9,"EXCELENT ","CS", "Muzammil Hussain", 20);
    g2.DetailShow();

    GratuateStudent g3(4.0,"OUTSTANDING ","CS", "Hanzla Hafeez", 23);
    g3.DetailShow();
   return 0;




}