#include <iostream>
using namespace std;

class student {
public:
int roll;
int marks;

    void setData(int roll,int marks){
        this->roll = roll;
        this->marks = marks;
    }

    void show(student &obj){
        cout << "roll " << obj.roll<<endl;
        cout << " marks:" << obj.marks << endl;
    }
};

int main(){
    student s1;
    s1.setData(101, 90);
    s1.show(s1);
    return 0;
}
