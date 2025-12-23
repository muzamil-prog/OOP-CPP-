#include <iostream>
 using namespace std;
  class Area{
    private:
    float radias;
    int lenght;
    int base;
    int side;
    public:
    float area(float r){
        radias=r;
        return 3.14f*r*r;
    }
    int area(int l, int b){
        lenght=l;
        base=b;
        return l*b;
    }
    int area(int s){
        side=s;
        return s*s;
    }
  };
  int main(){
    Area m;
    cout <<"The area of circle is:"<<m.area(6.0f)<<endl;
    cout <<"THe area of rectangle is:"<<m.area(6,8)<<endl;
    cout <<"The area of square is: "<<m.area(8)<<endl;
    return 0;
  }
