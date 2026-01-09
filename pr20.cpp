//operator overloading
#include <iostream> // library for cout and cin
using namespace std;
class prefix{// created the class prifix
    int num;// data meber is num
    public:
    prefix(int num){// a constructer with one parameter
        this->num=num;// where use this pointer to point the object
    }
    prefix operator ++(){ //prefix increment operator are oveload
        return prefix(++num);
    }
    void show(){
        cout <<"num:"<<num<<endl;
    }
};
int main(){
   
    prefix p(10); // created the object and intailize the value
     // show the actual value
   p.show();  
    prefix p1=++p; // calss the overload 
    p1.show(); // show the value afgter one increament
    return 0;
}