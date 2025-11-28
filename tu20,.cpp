#include <iostream>
using namespace std;
class book{
    private:
    string name;
    int bookNo;
    public:
    void input();
    void show();
};
void book:: input(){
    cout <<"enter your book name"<<endl;
    cin >> name;
    cout <<"enter your book no"<<endl;
    cin >> bookNo;
}
void book:: show(){
    cout <<"your book name is "<<name<<endl;
    cout <<"your book no is "<<bookNo<<endl;
}
int  main(){
    book k;
    k.input();
    k.show();
    return 0;
    
}