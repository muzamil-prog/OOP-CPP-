#include <iostream> 
using namespace std;
class Display{
    public:
    int display(int x){
        cout <<"intege value :"<<x<<endl;
        return x;
    }
    string display(string name){
        cout <<"string value :"<<name<<endl;
        return name;
    }
    float display(float b){
        cout <<"float value :"<<b<<endl;
        return b;
    }
};
int main(){
    Display d;
    d.display(8);
    d.display("Muzammil Hussain");
    d.display(90.0f);
    return 0;
}