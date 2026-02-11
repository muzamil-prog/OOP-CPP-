#include <iostream>
using namespace std;
class Sum{
    private:
    int a, b;
    public:
    Sum(){
        a=b=0;
    }
    void setData(int a, int b){
        this->a=a;
        this->b=b;
    }
    void show(){
        cout <<"The values of a is:"<<a<<endl;
        cout <<"The values of b is:"<<b<<endl;
    }
    Sum operator +(Sum obj){
        Sum temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
};
int main(){
    Sum s1,s2, s3;
    s1.show();
    s1.setData(10, 20);
    s2.setData(20, 30);
    s3=s1+s2;
    s3.show();
    return 0;

}