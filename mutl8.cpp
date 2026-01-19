#include <iostream>
using namespace std;
class student{
    protected:
    int rollNo;
    public:
    student(int rollNo=0){
        this->rollNo=rollNo;
    }
    void setRollNo(int rollNo){
        this->rollNo=rollNo;
    }
    int getRollNo(){
        return rollNo;
    }
    void printRollNo() const{
        cout <<"the roll no of the student is:" <<rollNo<<endl;
    }
};
class exam:public student{
    public:
    float math;
    float physics;
    exam( int rollNo=0, float math=0, float physics=0 ):student(rollNo){
        this->math=math;
        this->physics=physics;
    }
    void setMarks(float math, float physics){
        this->math=math;
        this->physics=physics;
    }
    void printMarks() const{
        cout <<"the marks of mathe is: "<<math<<endl;
        cout<<"the marks of physics is: "<<physics<<endl;
    }
};
class result:public exam{
    public:
    float percentage;
    result( float percentage=0,int rollNo=0, float math=0, float physics=0 ):exam( rollNo ,math, physics){
       this->percentage=percentage;

    }
    void calculatePercentage() const{
        cout <<"the total percentage is:"<<(math+physics)/2<<"%"<<endl;
    }
    void show()const{
        printRollNo();
        printMarks();
        calculatePercentage();
    }
};
int main(){
    result r;
    r.setRollNo(22);
    r.setMarks(90, 95);
    r.show();
    return 0;
}