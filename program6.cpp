#include <iostream>
using namespace std;
 class box{
    private:
    int height;
    int width;
    int length;
    public:
    void setValue(int h, int w, int l){
        height=h;
        width=w;
        length=l;
    }
    int volume(){
        return height*width*length;
    }
    void show(box &b){
    cout <<"volume is:"<<b.volume()<<endl;
    }
 };
 int main(){
    box b1;
    b1.setValue(5,7,9);
    b1.show(b1);
    return 0;
 }