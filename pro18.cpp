#include <iostream>
#include<string>
using namespace std;
class Number{
    private:
    string str;
    public:
    void set(string st){
        str=st;

    }
    void show(){
        cout <<str<<endl;
    }
    bool operator ==(Number s){
        if(s.str==str){
            return 1;
        }else{
            return 0;
        }
    }
};
int main(){
    Number n1,n2,n3;
    n1.show();
    n1.set("hello");
    n1.show();
    n2.set("hello");
    n2.show();
    if(n1==n2){
        cout <<"bothe string are equal "<<endl;
        
    }else{
        cout <<"are not equall"<<endl;
    }
    return 0;

}