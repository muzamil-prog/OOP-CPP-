// the process of adtional meaning of operater is called operater overloading operater overloading perform different operation on operater depend on the operands three object are not used in the operater overloading three level of operater overloading unery, binery and arithmetic operater overoloading 
// == both increament and decreament operater overlaoding===
#include <iostream>
using namespace std;
class Number{
    private:
    int num;
    public:
    Number(){
        num=0;
    }
    void show(){
        cout<<"num is:"<<num<<endl;
    }
    Number operator ++(){
        Number temp;
        ++num;
    
        temp.num=num;
        return temp;
    }
    Number operator ++(int){
        Number temp;
        num++;
        temp.num=num;
        return temp;
    }

};
int main(){
    Number n1;
    n1.show();
    ++n1;
    n1.show();
    n1++;
    n1++;
    n1.show();
    return 0;
}