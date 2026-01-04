#include <iostream>
using namespace std;
class box{
    private:
    int height ;
    int length;
    int width;
    public:
    box setValue(int h, int l, int w){
        height=h;
        length=l;
        width=w;
        return *this;
    }
    void valume(){
        cout <<"the valume of box"<<height*length*height<<endl;
    }
};
int main(){
    box b;
    b=b.setValue(5,7,8);
    b.valume();
    return 0;
}