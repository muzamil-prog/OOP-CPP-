#include <iostream>
using namespace std;
class car{
    private:
    string name;
    int model;
    public:
    void setValue(string name, int model){
        this->name=name;
        this->model=model;
    }
    void show(car obj){
        cout <<"name is:"<<obj.name<<endl;
        cout <<"the maodel is:"<<obj.model<<endl;
    }
};
int main(){
    car c1;
    c1.setValue("toyata", 2023);
    c1.show(c1);
    return 0;
    
}