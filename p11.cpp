#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    int id;
    public:
    void setData(string n, int i){
        name=n;
        id=i;
        
    }
};
class salary:public employee{
    float basic, hra, da;
    public:
    void setSalary(float b, float h, float d){
        basic=b; 
        hra=h;
        da=d;

    }
    void show(){
        cout <<"employee name="<<name<<"ID="<<id<<endl;
    };

}