#include <iostream>
using namespace std;
class number{
    public:
    int value;
    number(int v=0){
        value=v;
    }
    number operator +(const number &obj){
        number temp;
        temp.value=value+obj.value;
        return temp;
    }
};
int main(){
    number n1(23);
    number n2(34);
    number n3=n1+n2;
    cout <<"result:"<<n3.value<<endl;
    return 0;
}