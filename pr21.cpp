#include <iostream>
using namespace std;
class postfix{// postfix class with private data meber is num
    int num;
    public:/// acess specifier 
    postfix(int num){// a constructer which pass one parameter and use this pointer are point to objec in this code
        this->num=num;

    }
    postfix operator ++(int){ // postfix increament operator overoloadin
        postfix temp(num++);
        return temp;


    }
    void show()// member function
{
    cout <<"num:"<<num<<endl;
}
};
int main(){
    postfix p(34);
    postfix p1=p++;// postfix 
    p1.show();// print as it 34
    p.show();// print 35 after post increament
    return 0;
    
}