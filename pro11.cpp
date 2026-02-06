#include <iostream>
using namespace std;
class Player{
    private:
    string name;
    double average;
    string team;
    public:
    Player(){}
    // instead of if   you ask the ask input in constructer so this type of construcnter we used
    //   Player() {
    //     cout << "Enter player name: ";
    //     cin >> name;
    //     cout << "Enter player average: ";
    //     cin >> average;
    //     cout << "Enter team name: ";
    //     cin >> team;
    // }
    void input(){
        cout <<"Enter your name:"<<endl;
        cin >> name;
        cout <<"Enter your average score:"<<endl;
        cin >>average;
        cout <<"Enter your team :"<<endl;
        cin >>team;
    }
    void change(string n, double a, string t){
        name=n;
        average=a;
        team=t;
    }
    void disply(){
        cout <<"player name is:"<<name<<endl;
        cout <<"The average of the player is:"<<average<<endl;
        cout <<"The name of team is:"<<team<<endl;
    }
    Player(string name, double average, string team){
        this->name=name;
        this->average=average;
        this->team=team;
    }
};
int main(){
    Player p, p1,p2("muzammil", 44.5, "pakistan"); 
    p.input();
    p.disply();
    p1.change("ali", 45.5, "asutrillai");
    p1.disply();
    p2.disply();
    
}
// }
// wrtie the class plyer with contain the attribute name , average and team  write three function input , change and disply these attribute 
// also write a constructer that asks for input to initalize all the attributes 