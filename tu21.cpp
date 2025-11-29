#include <iostream>
using namespace std;
class test{
    private:
    int testCode;
    string description;
    int noCandinate;
    int centerRequried;
    int calCenter(){
         return noCandinate/100+1;
    }
    public:
    void shedule();
    void diptest();
};
void test:: shedule(){
    cout <<"enter the test code of your test"
<<endl;
cin >> testCode;
cout <<"enter the discroption"<<endl;
cin >> description;
cout <<"enter no of candinate"<<endl;
cin >> noCandinate;
centerRequried = calCenter();}
void test:: diptest(){
    cout <<"test code is"<<testCode<<endl;
    cout <<"description is"<<description<<endl;
    cout <<"number of candinate"<<noCandinate<<endl;
    cout <<"center requried "<<centerRequried;

}
int main(){
    test t;
    t.shedule();
    t.diptest();
    return 0;
}