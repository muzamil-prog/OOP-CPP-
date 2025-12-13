//return object from member function

#include <iostream>
using namespace std;
class number{
    int num;
    public:
    void getValue(int n){
        num=n;
    }
    number add(number obj){
        number temp;
        temp.num=num+obj.num;
        return temp;
    }
    void display(){
        cout <<"number:"<<num<<endl;
    }
};
int main(){
    number m1,m2,m3;
    m1.getValue(30);
    m2.getValue(40);
    m3=m1.add(m2);
    cout <<"result after addtion:"<<endl;
    m3.display();
    return 0;
}