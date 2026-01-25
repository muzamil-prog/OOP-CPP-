#include <iostream>
using namespace std;
class car{
    int model;
    float price;
    public:
    car(){}
       car(int model, float price){
        this->model=model;
        this->price=price;
       }
      virtual void show(){
        cout <<"model"<<model<<endl;
        cout <<"price "<<price<<endl;
       }
};
class tyota:public car{
    public:
      float  enginspeed;
      double price;
      tyota(float enginspeed, double price){
        this-> enginspeed= enginspeed;
        this-> price=price;
      }
      void show() override{
        cout <<"enginspeed:"<<enginspeed<<endl;
        cout <<"price:"<<price<<endl;
      }

};
int main(){
    car*ptr;
    tyota obj2(122, 40000);
    ptr= new car(2022, 50000);
    ptr->show();
    ptr= & obj2;
    ptr->show();
    return 0;
}