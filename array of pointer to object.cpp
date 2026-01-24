#include <iostream>
using namespace std;
class shop{
private:
int  id;
float price;
public:
void setData(int id, float price){
    this->id=id;
    this->price=price;
}
void getData(){
    cout <<"the id of shop"<<id<<endl;
    cout <<"the price of  item"<<price<<endl;
}
};
int main(){
    int size=5;
    // int x;
    // int *ptr=&x;
    int p;
    float q;
    shop*ptr=new shop[size];
    for(int i=0; i<size; i++){
        cout <<"enter the id and price of item"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
    }
    for(int i=0; i<size; i++){
        cout <<"the id and price of item is:"<<i+1<<endl;
        ptr->getData();
    }
    return 0;
}