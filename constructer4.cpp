#include <iostream>
using namespace std;
class rectangle{
    private:
    int length, width;
    public:
    rectangle(){
        length=0;
        width=0;
    }
    rectangle(int l , int w){
        cout <<"parameterized constructer"<<endl;
        length=l;
        width=w;
    }
    void area(){
        cout <<"area="<<length*width<<endl;
    }

};
int main(){
    rectangle r1;
    rectangle r2(5,6);
    r1.area();
    r2.area();
    return 0;
}