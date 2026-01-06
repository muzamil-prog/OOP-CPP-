#include <iostream>
using namespace std;
class person{
    public:
  virtual  void show(){
        cout <<"this is a  person class"<<endl;
    }
};
class student:public person{
    public:
    void show()override{
        cout <<"this is a student class "<<endl;

    }
};
class gratuateStudent:public person{
    public:
    void show()override{
        cout <<"this is  class of gratuat student"<<endl;
    }
};
int main(){
    person* ptr;
    ptr=new person;
    ptr->show();
    student s;
    ptr=&s;
    ptr->show();
    gratuateStudent g;
    ptr=&g;
    ptr->show();
    return 0;

}