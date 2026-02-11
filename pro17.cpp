#include <iostream>
using namespace std;
class Concate{
    private:
    string str;
    public:
    void set(string str){
        this->str=str;

    }
    void show(){
        cout <<"c1"<<str<<endl;
    }
    Concate operator +(Concate c){
        Concate temp;
        temp.str=str+c.str;
        return temp;
    }
};
int main(){
Concate c1,c2,c3;
c1.set("hello");
c1.show();
cout<<"c2:";
c2.set("world");
c2.show();
cout <<"c3:";
c3=c1+c2;
c3.show();
return 0;
}