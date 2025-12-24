#include <iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(int real=0, int imag=0){
        this->real=real;
        this->imag=imag;
        

        
    }
    Complex operator +(Complex obj){
        return Complex(real+obj.real, imag+obj.imag);
    }
    void show(){
        cout <<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    Complex obj1(4,6);
    Complex obj2(7,8);
    Complex obj3=obj1+obj2;
    obj3.show();
    return 0;

}