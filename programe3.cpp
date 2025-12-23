#include <iostream>
using namespace std;
class Volume{
    public:
    int volume(int a){
        return a*a*a;
    }
    int volume(int l, int w, int h){
        return l*w*h;
    }
    float volume(float r, float h){
        return 3.14f*r*h;
    }
};

    int main(){
        Volume n;
        cout <<"THe volume of cube:"<<n.volume(6)<<endl;
        cout <<"The voulme of cubid :"<<n.volume(5,8,6)<<endl;
        cout <<"The volume of cylenderis:"<<n.volume(5.0f,4.0f)<<endl;
        return 0;
    }