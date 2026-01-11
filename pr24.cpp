#include <iostream>
using namespace std;
class Number{
    int num;
    public:
    Number(int num){
        this->num=num;

    }
    Number operator +=(Number obj){
        return num+=obj.num;
    }
    void show(){
        cout <<"num:"<<num<<endl;
    }
};
int main(){
    Number n(10);
    Number n2(30);
    Number n3=n+=n2;
    n3.show();
    return 0;
}