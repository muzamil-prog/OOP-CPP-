#include <iostream>
using namespace std;
class person{
    public:
    string  name; 
    person(){}
    person(string name){
        this->name=name;

    }
    void show(){
        cout <<"name:"<<name<<endl;
    }
};
class student: public person{
    private:
    int rollNo;
    public:
    student(){}
    student(int rollNo){
        this->rollNo=rollNo;
    }
    void show(){
        cout <<"name:"<<name<<endl;
        cout <<"roll no:"<<rollNo<<endl;
    }

};
int main(){
    person*p;
    student ob2;
   
    p=new person("name");
    p->show();
     p= new student(22);
    p=&ob2;
    p->show();
    return 0;

}