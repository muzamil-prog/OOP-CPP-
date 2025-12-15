#include <iostream>
using namespace std;
class counter{
    private:
    int count;
    public:
    void setcounter(){
        count=0;
    }
    counter increament(){
        count++;
        return *this;
    }
    void show(){
        cout<<"after one increament"<<count<<endl;
    }
};
int main(){
counter t;
t.setcounter();
t.increament().increament();
t.show();
return 0;
}