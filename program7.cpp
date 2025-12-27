#include <iostream>
using namespace std;
class Counter{
    private:
    int x;
    public:
    Counter(int x=0){
        this->x=x;
    }
    int operator ++(){
         x++ ;
        
    }
    void show(){
        cout <<"the value of after increament:"<<x<<endl;
    }
};
int main(){
    Counter c(5);
    c.show();
    ++c;
    c.show();
    return 0;
}