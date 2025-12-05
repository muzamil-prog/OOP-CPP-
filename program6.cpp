// code reuse ability inherteance


#include <iostream>
using namespace std;
class employee{
    public:
    void copmany(){
        cout<<"this is xy company"<<endl;

    }
};
class manger:public employee{
    public:
    void role(){
        cout <<"manger mange the employeee"<<endl;
    }
};
int main(){
    manger ob;
    ob.copmany();
    ob.role();
    return 0;
}