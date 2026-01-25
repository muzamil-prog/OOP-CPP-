#include <iostream>
using namespace std;
class base{
    public:
    int var_base;
    void display(){
        cout <<"dislay the var base"<<var_base<<endl;
    }
};
class drived:public base{
    public:
    int var_drive;
    void display(){
        cout <<"display the var base"<<var_base<<endl;
        cout <<"display the var drive"<<var_drive<<endl;
    }
};

int main(){
    base* var_base_pointer;// pointer of base class
    base obj_base;   // object of bass class
    drived obj_drive; //objedt of drived class
    var_base_pointer=&obj_drive;//  base class pointer point to drived class object
    var_base_pointer->var_base= 33;// with help of pointer acess the property of base class
    // var_base_pointer->var_drive=23; which line throug error becuase pointer of base class
    var_base_pointer->display();
    drived* var_drive_pointer;   // ponter of drived classs
    var_drive_pointer=&obj_drive;// pointer point to drived class object
    var_drive_pointer->var_drive=33;// with pointer acesse the property of drived class
    var_drive_pointer->var_base=45;
    var_drive_pointer->display();// with the pointer acess drived class function
    return 0;
} 