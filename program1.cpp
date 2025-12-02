#include<iostream>
using namespace std;
class parent{
    public:
    void showParent(){
        cout <<"this is a parent class"<<endl;
    }
};
class child:public parent{
    public:
    void showChild(){
        cout <<"this is a child class"<<endl;
    }
};

int main (){
    child ob;
    ob.showParent();
    ob.showChild();
    

    return 0;
}