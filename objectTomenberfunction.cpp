#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    student(int marks){
        this->marks=marks;
    }
    void compairMarks(student obj){
        if(marks> obj.marks){
            cout <<"the first student is greater marks"<<endl;
        }else{
            cout <<"the secnod student is greater marks :"<<endl;
        }
    }
};
int main(){
    student s1(30);
    student s2(40);
    s1.compairMarks(s2);
    return 0;
}