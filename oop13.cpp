#include <iostream>
using namespace std;
class test{
    private:
    int testCode;
    char disruption[20];
    int NoCandinate;
    int centerReqd;
    int calCenter(){
        return NoCandinate/100+1;

    }
    public:
    void shedule();
    void displayTest();

};
void test::shedule(){
    cout <<"enter test code"<<endl;
    cin>>testCode;
    cout <<"enter discruption "<<endl;
    cin>>disruption;
    cout <<"enter no of candinate"<<endl;
    cin>>NoCandinate;
    centerReqd=calCenter();
}
void test::displayTest(){
    cout <<"test code"<<testCode<<endl;
    cout <<"discruption"<<disruption<<endl;
    cout << "no of candinate"<<NoCandinate<<endl;
    cout <<"enter of requied"<<centerReqd<<endl;
}
int main(){
    test obj;
    obj.shedule();
    obj.displayTest();
    return 0;
}