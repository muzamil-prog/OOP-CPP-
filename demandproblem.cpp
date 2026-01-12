#include <iostream>
using namespace std;
class person{
    public:
    string name, adress;
    int age;
    
   
    void getDataperson(){
        cout <<"enter the name:"<<endl;
        cin >> name;
        cout <<"enter the adress:"<<endl;
        cin>> adress;       
        cout <<"enter the age:"<<endl;
        cin >>age;
    }
};
class teacher:public person{
    public:
    int teacherId;
    string subject;
    
    void getDatateacher(){
    
        cout <<"enter the teacher id:"<<endl;
        cin>> teacherId;
        cout <<"enter the subject name:"<<endl;
        cin >>subject;
    }
    void show(){
        cout <<"name"<<name<<endl;
        cout <<"adress"<<adress<<endl;
        cout <<"teacher id:"<<teacherId<<endl;
        cout <<"subject"<<subject<<endl;
    }
    
};
class student:public person{
    public:
    int rollNo;
    char grade;
    void getDatastudent(){
        cout <<"enter the rolno"<<endl;
        cin >>rollNo;
        cout <<"enter the grade"<<endl;
        cin >> grade;
    }
    void display(){
        cout <<"name:"<<name<<endl;
        cout <<"adress:"<<adress<<endl;
        cout <<"age:"<<age<<endl;
        cout <<"rollNo"<<rollNo<<endl;
        cout <<"grade"<<grade<<endl;
    }

};
int main(){
    student s1;
    teacher t1;
    int choice;
    cout <<"1..... enter student detail......"<<endl;
    cout <<"2.... enter teacher detail...."<<endl;
    cout <<"enter your choic"<<endl;
    cin >> choice;
    if(choice==1){
        s1.getDatastudent();
        s1.display();
    }else if(choice== 2){
      t1.getDatateacher();
      t1.show();
    }else{
        cout <<"you enter the invalide choice please try again"<<endl;
    }
    return 0;
}