#include <iostream>
using namespace std;
class car{
    public:
    string name;
    string brand;
    int model;
    void show(){
        cout <<"the name of the car"<<name<<endl;
        cout <<"the brand of the car is"<<brand<<endl;
        cout <<"the model of the car is"<<model<<model;
    }

};
int main(){
    car myCar;
    myCar.name="corrla";
    myCar.brand="toyyta";
    myCar.model=2025;
    myCar.show();
    return 0;
}