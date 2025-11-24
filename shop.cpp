#include <iostream>
using namespace std;
class shop{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter=0;
    public:
    void counterId(){
        counter=0;
    }
    void setPrice();
    void displayPrice();
};
void shop:: setPrice(){
    cout <<"enter the your item id"<<counter+1<<endl;
    cin >>itemId[counter];
    cout <<"enter the your item price"<<counter+1<<endl;
    cin >>itemPrice[counter];
    counter++;
}
void shop:: displayPrice(){
    for(int i=0; i<counter; i++){
        cout <<"yout price with item id"<<itemId[i]<<"is:"<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukan;
    dukan.counterId();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
   dukan.displayPrice();
   return 0;
}