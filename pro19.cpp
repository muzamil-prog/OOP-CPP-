#include <iostream>
using namespace std;
class Number{
    private:
    int a;
    int b;
    public:
    Number(){
        a=b=0;
    }
    void setdata(int a, int b){
        this->a=a;
        this->b=b;
    }
    void show(){
        cout<<"the value of  is"<<a<<endl;
        cout <<"the values of b is:"<<b<<endl;
    }
    void operator +=(Number n){
        
        a=a+n.a;
        b=b+n.b;
        
    }
};
int main(){
    Number n1, n2;
    n1.show();
    n1.setdata(12,34);
    n1.show();
    n2.setdata(20,30);
    n2.show();
    n2+=n1;
    n2.show();
    return 0;
    

}