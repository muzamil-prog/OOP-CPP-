#include <iostream>
using namespace std;
class Student{
    private:
    int marks;
    public:
    Student(int marks){
        this->marks=marks;
    }
    bool operator==(Student s){
        return bool(marks==s.marks);
    }
};
int main(){
    Student s1(90);
    Student s2(95);
    if(s1==s2){
        cout <<"The both student have same marks"<<endl;

    }else{
        cout <<"the marks have different"<<endl;
    }
}