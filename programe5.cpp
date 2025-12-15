#include <iostream>
using namespace std;
class tance{
    private:
    int feet ;
    int inches;
    public:
    tance(int feet, int inches){
        this->feet=feet;
        this->inches=inches;
    }
    tance(){

    }
    tance addDistance(tance d){
        int totalInches;
        totalInches=inches+d.inches;
        int totalFeet;
        totalFeet=feet+d.feet+(totalInches/12);
        totalInches=totalInches%12;
        return tance(totalFeet,totalInches);
    }
    void display(){
        cout <<"feet:"<<feet<<endl<<"inches:"<<inches<<endl;
    }
};
int main(){
    tance d1(10,12);
    tance d2(5,10);
    tance d3;
    d3=d1.addDistance(d2);
    d3.display();
    return 0;

}