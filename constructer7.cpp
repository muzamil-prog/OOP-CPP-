#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student();
    void showData();
};
student::student(){
    cout <<"enter your name and your age"<<endl;
    cin >> name>>age;
    // name="unknow";
    // age=0;
    cout <<"default constructer is called"<<endl;

}
void student::showData(){
    cout <<"name="<<name<<endl;
    cout <<"age="<<age<<endl;
}
int main(){
    student s;
    s.showData();
    return 0;
}