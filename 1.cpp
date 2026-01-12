// objects are entites in the real world
// class is like ablueprint of these entities
// exmple if we store information about techer in college teacher is entity for our code so teacher is object 

// acess specifier three type of acess specifier
// 1 public: public we can acess any where in main function or in other classes
// 2 private can acess only inside the class
// 3 protected that can access property of base class that are comonly use in hertance consept
// syntax of class
// class class name{
    // class body
// }
#include<iostream>
using namespace std;
class teacher{
    private:
    double salary;
      

    public:
    string name;
    string department;
    string newDepartment;
    string subject;
    // double salary;
    public:
    
    void changeDep(){
        department= newDepartment;
    }
    void setSalary(double s){
        salary=s;
    }
    double getSalary(){
        return salary;
    }
};
int main (){
    teacher t1;
    t1.name="ali";
    t1.department="computer science";
    t1.subject="oop";
    t1.setSalary(200000) ;
   cout <<"salary"<< t1.getSalary()<<endl;
    cout <<"teacher name: \n"<<t1.name<<endl;
    cout <<"department: \n"<<t1.department<<endl;
    cout <<"subject:\n"<<t1.subject<<endl;
    // cout <<"salary:\n"<<t1.salary<<endl;
    // teacher t2; we can store data as similar other teacher with different information or name etc
    teacher t3;
    teacher t4;
    teacher t5;
    
    
    return 0;
}