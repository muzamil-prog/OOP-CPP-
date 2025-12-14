#include <iostream>
using namespace std;
class multiply{
    int a;
    int b;
    
    public:
    void setValue(int a, int b){
        this->a=a;
        this->b=b;
    }
    multiply product(multiply obj){
        multiply temp;
        temp.a=a*obj.a;
        temp.b=b*obj.b;
        return temp;
    }
    void shoe(){
        cout <<"the product fo a= "<<a<<"the product of b= "<<b<<endl;
    }
};
int main(){
    multiply m1, m2 ,m3;
    m1.setValue(6,8);
    m2.setValue(8,7);
    m3=m1.product(m2);
    m3.shoe();
    return 0;
}
