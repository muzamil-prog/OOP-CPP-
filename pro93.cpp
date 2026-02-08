#include <iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
 A(){
    a=10;
 }
 friend void show(A, B);
};
class B{
    private:
    int b;
    public:
    B(){
        b=10;
    }
  friend  void show(A , B );
};
 void show(A x, B y){
        int r=x.a+ y.b;
        cout <<"the value of the a is :"<<x.a<<endl;
        cout <<"the Value of b is:"<<y.b<<endl;
        cout <<"sum is:"<<r<<endl;
    }
int main(){
    A obj;
    B obj1;
    show(obj,obj1);
    return 0;
}