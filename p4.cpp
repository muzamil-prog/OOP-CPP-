
// inhertance with function

#include <iostream>
using namespace std;
class shape{
    protected:
    int lenght, width;
    public:
    void setData(int l, int w){
        lenght=l;
        width=w;
    }
};
class rectangle:public shape{
    public:
    int area(){
        return lenght*width;
    }
};
int main(){
    rectangle r;
    r.setData(5, 6);

    cout <<"the area of rectagle is"<<r.area()<<endl;
    
    return 0;
}