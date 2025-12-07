#include <iostream>
using namespace std;
class  vehicle{
    public:
    string company;
    void getCompany(){
        cout <<"enter your company name"<<endl;
        cin >>company;

    }
};
class model:public vehicle{
    public:
    string model;
    void getModel(){
        cout <<"enter the your model"<<endl;
        cin >> model;

    }
};
class electroCar:public model{
    public:
    int battery;
    void getBatery(){
        cout <<"enter the battery  capacity"<<"kwh"<<endl;
        cin >> battery;
    }
    void show(){
        cout <<"company name is:"<<company<<endl;
        cout <<"model is:"<<model<<endl;
        cout <<"batery capacty is:"<<battery<<endl;
    }
};
int main(){
    electroCar e;
    e.getCompany();
    e.getModel();
    e.getBatery();
    e.show();
}