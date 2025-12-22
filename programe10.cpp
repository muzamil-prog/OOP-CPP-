#include <iostream>
using namespace std;
class square{
private:

int side;
public:
void setValue(int side){

    this->side=side;
}
int area(){
    return side*side;
}
void show(square &obj){
    cout <<"the area of sqare:"<<obj.area()<<endl;
    
}
};
int main(){
    square s1;
    s1.setValue(6);
    s1.show(s1);
    return 0;
}