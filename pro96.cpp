#include <iostream>
using namespace std;
class DB;
class Dm{
    private:
    int meter;
    int centimeter;
    public:
    void read(){
        cout <<"enter the distance in meter:"<<endl;
        cin>>meter;
        cout <<"enter the distance in centimeter:"<<endl;
        cin >>centimeter;
    }
    friend void add(DB , Dm );
};
class DB{
    private:
    int feet;
    int inch;
    public:
    void read(){
        cout <<"enter the distance in feet :"<<endl;
        cin >>feet;
        cout <<"enter the distance in inch:"<<endl;
        cin >>inch;
    }
    friend void add(DB obj, Dm obj1);
};
void add(DB obj, Dm obj1){
    int totalDBcm= (obj.feet*12+obj.inch)*2.54;
    int totalDmcm=obj1.meter*100+obj1.centimeter;
    int totalcm=totalDBcm+totalDmcm;
    int totalmeter= totalcm/100;
    int totalcentimeter=totalcm%100;
    cout <<"total meter is"<<totalmeter<<"total centimeter is:"<<totalcentimeter<<endl;
}
int main(){
    DB obj1;
    Dm obj2;
    obj1.read();
    obj2.read();
    add(obj1,obj2);
    return 0;
}
