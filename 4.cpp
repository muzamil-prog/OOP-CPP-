#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    
    person(string namd, int age){
       this-> name=name;
        this->age=age;
    }
    person(){
     cout <<"constrcter is called "<<endl;
    }
    ~person(){
        cout <<"the parent class destructer is called "<<endl;
    }
    
};
class student:public person{
    public:
    int rolNo;
    student(string name, int age, int rolNo):person(name,  age){
       this->rolNo=rolNo;
       this->name=name;
       this->age=age;

    }
  void   getInfo(){
        cout <<"name:  "<<name<<endl;
        cout <<"agg:"<<age<<endl;
        cout <<"roll no is:"<<rolNo<<endl;
    }
    student(){
        cout <<"constructer is called chiled "<<endl;
    }
    ~student(){
        cout <<"destructer of chield class "<<endl;
    }

};
int main(){
    student s1("MUZAMMIL HUSSAIN", 22, 34);
    
    s1.getInfo();
    return 0;
}