#include <iostream>
using namespace std;
class rectagle{
    public:
    int height;
    int width;
    int length;
    public:
    void setData(int height , int width,int length){
        this->height=height;
        this->width=width;
        this->length=length;
    }
    int area(){
        return length*width;
    }
   void show(rectagle &r);
};
void show(rectagle &r){
        cout <<"width"<<r.width<<"height:"<<r.height<<"length:"<<r.length<<"area:"<<r.area()<<endl;
    }
int main(){
    rectagle  r;
    r.setData(5,6,8);
    show(r);
    return 0; 
}