#include <iostream>
using namespace std;
class mobile{
private:
string brand;
int storage;
public:
void setValue(string brand, int storage){
    this->brand=brand;
    this->storage=storage;
}
void show(mobile &obj){
    cout <<"the barand of moblie is:"<<obj.brand<<endl;
    cout <<"the storage of the moblie:"<<obj.storage<<endl;
}
};
int main(){
    mobile b1;
    b1.setValue("vivo", 256);
    b1.show(b1);
    return 0;
}