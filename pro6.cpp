#include <iostream> 
using namespace std;
class student{
    private:
    string name;
    int marks;
    static int rollNo;
    public:
    student(string name, int marks){
        this->name=name;
        this->marks=marks;
    rollNo++;
    }
    // void get(){
    //     cout <<"Enter the name:"<<endl;
    //     cin >> name;
    //     cout <<"Enter the marks:"<<endl;
    //     cin >> marks;
    // }
    void show(){
        cout <<"Roll no:"<<rollNo<<endl;
        cout <<"name:"<<name<<endl;
        cout <<"marks:"<<marks<<endl;

    }

};
int student:: rollNo=0;
int main(){
    student s1("ali", 80); 
    // s1.get();
    s1.show();
    // s2.get();
  student  s2("muzammil", 90);
    s2.show();
    // s3.get();
  student  s3("asghar", 70);
    s3.show();
    return 0;
}