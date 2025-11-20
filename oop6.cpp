#include <iostream>
using namespace std;
class employee{
    private:
    string name;
    int salary;
    public:
    employee(){
        cout <<"constructer is called"<<endl;

    }
    employee(string n, int s){
        name="no";
        salary=0;
    }
    void showData(){
        cout <<"parameterized constructer"<<endl;
        cout <<"name="<<name<<endl;
        cout <<"salary="<<salary<<endl;
    }
};
int main(){
    employee e1;
    employee e2("ali" , 2000);
    e1.showData();
    e2.showData();
    return 0;
}