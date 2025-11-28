#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int height;
    public:
    void input(){
        cout <<"enter your name"<<endl;
        cin >> name;
        cout <<"enter your age"<<endl;
        cin >>age;
        cout <<"enter your height "<<endl;
        cin>>height;

    }
    void display(){
        cout <<
        "your name is"<<name<<endl;
        cout <<"your age is " <<age<<endl;
        cout <<"your heihgt is "<<endl;
    }
};
int main(){
    student s;
    s.input();
    s.display();
  return 0;
}