#include <iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
    A(){
        a=10;
        b=20;
    }
    friend class B;
};
class B{
    public:
    void show(A obj)
    {
        cout <<"the value of a is:"<<obj.a<<endl;
        cout <<" the value of  b is:"<<obj.b<<endl;

    }
};
int main(){
    A obj1;
    B obj2;
    obj2.show(obj1);
    return 0;

}