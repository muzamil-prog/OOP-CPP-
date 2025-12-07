#include <iostream>
using namespace std;
class test{
    private:
    string name;
    int age;
    public:
    test(){
        cout <<"constructer is called"<<endl;
        name="ali";
        age=12;

    }
    void display();
};
void test::display(){
    cout <<"name="<<name<<endl;
    cout <<"age"<<age<<endl;

}
int main(){
    test t;
    t.display();
    return 0;
}