#include <iostream>
using namespace std;
class laptop{
private:
string brand;
int ram;
public:
void setValue(string brand, int ram){
    this->brand=brand;
    this->ram=ram;
}
void show(laptop  &obj){
    cout <<"the barand of laptop is:"<<obj.brand<<endl;
    cout <<"the ream of the lapotp:"<<obj.ram<<endl;
}
};
int main(){
    laptop l1;
    l1.setValue("hp", 32);
    l1.show(l1);
    return 0;
}