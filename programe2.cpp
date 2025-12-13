#include <iostream>
using namespace std;
class box{
    private:
    int length;
    int width;
    int height;
    public:
    
    
    box setValue(int length, int width, int height){
        this->length=length;
        this->width=width;
        this->height=height;
        return *this;
    }
    void volume(){
        cout <<"voule is:"<<length*width*height<<endl;
    }
};
int main(){
    box v;
    v=v.setValue(5,6,8);
    v.volume();
    return 0;
}
