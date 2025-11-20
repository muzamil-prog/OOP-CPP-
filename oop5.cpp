#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student(){
        name="ali";
        age=12;
        cout <<"default constructer is called"<<endl;
    }
    void showDate(){
        cout <<"name="<<name<<endl;
        cout <<"age"<<age<<endl;

    }
};
int main(){
    student s;
    s.showDate();
    return 0;
}