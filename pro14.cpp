#include <iostream>
using namespace std;
class Car{
    private:
    string name;
    char direction;
    int position;
    public:
    Car(string name, char direction, int position){
        this->name=name;
        this->direction=direction; 
        this->position=position;
    }
    void turnDirection(){
        if(direction=='E'){
            direction='S';

        
            
        }else if(direction=='S'){
            direction='W';
        }else if(direction=='W'){
           direction='N';
        }else if(direction=='N'){
            direction='E';
        }
    }
    void turnDirection(char newDirection){
        direction=newDirection;
    }
    void move(int changeposition){
        position= position+changeposition;
    }
    void show(){
        cout <<"The name of car is:"<<name<<endl;
        cout <<"Direction:"<<direction<<endl;
        cout <<"position from zero point:"<<position<<endl;
    }
};
int main(){
    Car c1("Havel", 'S' , 0);
    c1.show();
    cout <<"Car turn right one step"<<endl;
    c1.turnDirection();
    c1.show();
    cout <<"set the direction directly"<<endl;
     c1.turnDirection('N');
     c1.show();
     cout <<"move car the by 20 units"<<endl;
     c1.move(20);
     c1.show();
     return 0;
}
// write the class car that contiains the following attributes the name of car the direction of car (E,W,N,S) the psoition of car(rom imaaginary zero point ) the class has the follow member functions; a constructor to initialize the attributes turn function to change the dirctction of car to one step right side (e.g if the direction is to E, it should be changed to Saand so on.) overload the turn function to change the direction to any side directly  it shouldaccept the direction as parameter move function to change the position of car away from zero point . it should acceptthe distance as parameter


