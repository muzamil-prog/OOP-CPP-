// input get menber in hertance


#include <iostream>
using namespace std;
class student{
    public:
    int name;
    
    void getName(){
        cout <<"enter your name"<<endl;
        cin >>name;
    }
};
class marks:public student{
    private:
    int marks;
    public:
void getMarks(){
    cout <<"enter your marks"<<endl;
    cin >> marks;}
    void show(){
        cout <<"name="<<name<<"marks="<<marks;

    }

};
int main(){
 marks ob;
 ob.getName();
 ob.getMarks();
 ob.show();
 return 0;   
}