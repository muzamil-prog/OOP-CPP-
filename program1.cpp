#include <iostream>
using namespace std;
class Calculater{
    private:
    int a;
    int b;
    float x;
    float y;
    public:
    int add(int a, int b){
        this->a=a;
        this->b=b;
        return a+b;
    }
    float add(float a, float b){
        this->a=a;
        this->b=b;
        return a+b;
    }
    
};
int main(){
    Calculater t;
    cout <<"result of integer addtion:"<<t.add(5,6)<<endl;
    cout <<"result of floating addtion: "<<t.add(5.6f,8.4f)<<endl;
    return 0;
}