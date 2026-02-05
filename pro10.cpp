#include <iostream>
using namespace std;
class student{
    private:
  static  int age;
    public:
    student(){
        age++;
    }
    static void show(){
        cout <<"object created is:"<<age<< "so far"<<endl; 
    }
};
int student::age=0;
int main(){
    student::show();
    student s1;
    s1.show();
    student s2;
    s2.show();
    student s3;
    s3.show();
    return 0;


}