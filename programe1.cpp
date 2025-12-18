#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int marks;
    public:
    void setData(string name, int marks){
        this->name=name;
        this->marks=marks;
    }
    void studentDetail(student obj){
     cout <<"name:"<<obj.name<<endl;
     cout <<"age:"<<obj.marks<<endl;
    }
};
int main(){
    student obj;
    obj.setData("ali", 90);
    obj.studentDetail(obj);
    return 0;

}