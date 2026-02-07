#include <iostream>
#include <string>
using namespace std;
class Run{
    private:
    string name;
    float distance;
    static string maxRunner;
    static float maxDistance;
    public:
    
    void getData(){
        cout <<"Enter the name:"<<endl;
        cin>> name;
        cout <<"Enter the distance he coverd:"<<endl;
        cin >>distance;
           if(distance > maxDistance ){    // check the which distance covered tha longgest then pass to static data meber 
            maxDistance= distance;
            maxRunner= name;   
    }
    }
 

    void show(){
        cout <<"The name of the runner is:"<<name<<endl;
        cout <<"The distances is:"<<distance<<"covered"<<endl;
    }
    static void showLongestRunner(){
        cout <<"longest coverd distance Runner details:"<<endl;
        cout<< "Name:"<<maxRunner<<endl;
        cout <<"Distanc:"<<maxDistance<<"covered"<<endl;
    }
};
string Run:: maxRunner="";
float Run:: maxDistance=0;
int main(){
    Run n1, n2, n3;
    n1.getData();
    n2.getData();
    n3.getData();
    cout <<"runner detaills"<<endl;
    n1.show();
    n2.show();
    n3.show();
    Run::showLongestRunner();


}

// write the class run that the contain following data members the name of the runner and the distance covered by a runner  the class has the following member functions  get function to input runner name and distance show function to displays runner name and distance  the user should be able to show the name ofthe runner who has coered the longest distance at any point of time. hint use static data member