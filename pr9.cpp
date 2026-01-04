#include <iostream>
using namespace std;
class number{
    private:
    int num;
    public:
    void getData(int n){
        num=n;
    }
    number add(number obj){
        number temp;
        temp.num= num+obj.num;
        return temp;
    }
    void show(){
        cout <<"number:"<<num<<endl;
    }

    
};
int main(){
    number n1,n2,n3;
    n1.getData(10);
    n2.getData(20);
    n3=n1.add(n2);
    cout <<"result after the addion numbers"<<endl;
    n3.show();
    return 0;
    
}