// #include <iostream>
// using namespace std;
// class test{
//     private:
//     string name;
//     int age;
//     public:
//     void input(){
//         cout << "enter your name and age"<<endl;
//         cin >> name >> age;

//     }
//     void output(){
//         cout <<"name= \n"<<name<<endl;
//         cout <<"age="<<age<<endl;
//     }
// };
// main(){
// test t,t1;
// t.input();
// t.output();
// t1.input();
// t1.output();
// return 0;
// }
#include <iostream>
using namespace std;
class test{
    private:
    string name;
    int age;
    public:
    void input(){
        cout << "enter your name and age"<<endl;
        cin >> name >> age;
    void output();
    }
    
};
void test:: output(){
        cout <<"name= \n"<<name<<endl;
        cout <<"age="<<age<<endl;
    }
main(){
test t,t1;
t.input();
t.output();
t1.input();
t1.output();
return 0;
}
