#include <iostream>
using namespace std;
class compair{
    private:
    int value;
    public:
    void setValue(int value){
        this->value=value;
    }
    compair greatValue(compair obj){
        if(value>obj.value){
            return *this;
        }else {
            return obj;
        }
    }
    void shoe(){
        cout <<" greater  value is:"<<value<<endl;
    }
};
int main(){
    compair r1 ,r2 ,r3;
    r1.setValue(12);
    r2.setValue(15);
    r3=r1.greatValue(r2);
    r3.shoe();
    return 0;
}