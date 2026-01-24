#include <iostream>
using namespace std;
class students{
    string name;
    int age;
    public:
void setData(string name, int age){
    this->name=name;
    this->age=age;
}
void getData(){
    cout <<"the name of the student is:"<<name<<endl;
    cout <<"the age of student of is:"<<age<<endl;

}
};
int main(){
    int size=5;
    string n;
    int a;
    students* ptr= new students[size];
    for(int i=0; i<size; i++){
        cout <<"enter the student name and student age:"<<i+1<<endl;
        cin >>n>>a;
        ptr->setData(n,a);
    } 
    for(int i=0; i<size; i++){
        cout <<"the name of student and the age of student is"<<i+1<<endl;
        ptr->getData();
    }
    return 0;
}