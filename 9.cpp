#include <iostream>
using namespace std;
class base1{
    protected:
    int x;
    public:
    void setx(int x){
        this->x=x;
    }
};
 class base2{
    public:
    int y;
    void sety(int y){
        this->y=y;

    }
    

    };
    class base3{
        public:
        int a;
        void seta(int a){
            this->a=a;
        }
    };
    class derivied: public base1, public base2, public base3{
        public:
        void show()const{
            cout <<"the value of x is:"<<x<<endl;
            cout <<"the value of y is: "<<y<<endl;
            cout <<"the value of a:"<<a<<endl;
            
        }
        void add()const{
            cout <<"the sume of all value is:"<<x+y+a<<endl;
        }
    };
    int main(){
        derivied d;
        d.setx(5);
        d.sety(5);
        d.seta(8);
        d.show();
        d.add();
        return 0;
    }
