#include <iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
     student(int marks){
        this->marks=marks;
     }
     friend void showMarks(student s);
};
void showMarks(student s){
    cout <<"marks"<<s.marks<<endl;
}
int main(){
    student s1(25);
    showMarks(s1);
    return 0;
}