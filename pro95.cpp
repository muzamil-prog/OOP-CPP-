#include <iostream>
using namespace std;
class student{
    private:
    static int n;
    public:
  static  void show(){
        cout <<"the value of n is:"<<n<<endl;
    }
    
};
int student:: n=10;
int main(){
    student::show();
    return 0;
}