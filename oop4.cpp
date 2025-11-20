#include <iostream>
using namespace std;
class test{
    private:
    string name;
    int age;
    public:
    void input();
    void display();
};
    void test::input(){
        cout << "enter your ful name"<<endl;
        getline(cin, name);
        cout <<"enter your age "<<endl;
        cin>> age;
    }
    void test::display(){
        cout <<"name="<<name<<endl;
        cout <<"age="<<age<<endl;
    }
    int main(){
        test t;
        t.input();
        t.display();
        return 0;
    }
