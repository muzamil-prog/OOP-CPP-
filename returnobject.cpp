#include <iostream>
using namespace std;
class student{
    int a;
    int b;
    public:
    student(){
        
    }
    student(int a, int b){
        this->a=a;
        this->b=b;
    }
    student add(student &obj){
        student temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
    void show(){
        cout <<"result is:"<<"a=:"<<a<<"b=:"<<b<<endl;
    }
};
int main(){
student s1(12,24);
student s2(23, 12);
student s3;
s3=s1.add(s2);
s3.show();
return 0;
}