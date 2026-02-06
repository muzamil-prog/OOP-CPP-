#include <iostream>
using namespace std;
class DB;// forwar declaretion of class Db
class DM{
    private:
    int meters;
     int centemeters;
     public:
     void read(){
        cout <<"Enter the distance in meter:"<<endl;
        cin >> meters;
        cout <<"Etner the distance in  centimeters:"<<endl;
        cin>> centemeters;
     }// declare a friend function and pass object d1 to DM and d2to DB
     friend void  addDistance(DM d1, DB d2);


};
class DB{
    private:
    int feet;
    int inch;
    public:
    void read(){
        cout <<"enter the the distance in feet and inch:"<<endl;
        cin >> feet>> inch;
    }
    friend void addDistance(DM d1, DB d2);
};
void addDistance(DM d1, DB d2){ // a defination of friend function outside of the class 
   int  totalCmDb= ( d2.feet*12+ d2.inch)*2.54; // conver feet and inch into centemeters
   int totalCmDm= d1.meters*100+ d1.centemeters;// convert meter and in centimeters
    int totalCm= totalCmDb+totalCmDm;
    // back to convert in meters and centermeters
     int resultMeters = totalCm/100;
     int resultCentemeters= totalCm%100;
     cout <<" total distance is :"<<endl;
     cout <<"total meteris is"<<resultMeters<< "total centermter is:"<< resultCentemeters<<endl;// display the  total distancse in meter and centemeter 

};
int main(){
    DM d1;
    DB d2;
    d1.read();
    d2.read();
    addDistance(d1, d2);
    return 0;
}




// create two classes dm and db to store the value odistance dm stores distances in meters and centmeteres and db in feet and inches write a program that can read values for the class objects and add one object of dm with another object ofdb  hint use friend function