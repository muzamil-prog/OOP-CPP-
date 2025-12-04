#include <iostream>
using namespace std;
class parent{
    protected:
    int num;
    public:
    void setData(int n){
        num=n;

    }
};
class child:public parent{
    public:
    void show(){
        cout <<"the value of number"<<num<<endl;
    }

};
int main(){
    child ob;
    ob.setData(100);
    ob.show();
    return 0;
}