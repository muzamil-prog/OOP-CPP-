#include <iostream>
using namespace std;
class Result{
    private:
    int roll;
    int marks[3];
    char name[50];
    public:
    void input(){
        cout <<"Enter the your roll no:"<<endl;
        cin >>roll;
        for(int i=0; i<3; i++){
            cout <<"Enter the the marks of three subjects:"<<endl;
            cin>> marks[i];
        }
        cout <<"Enter you name :"<<endl;
        cin >>name;
    }
    void show(){
        cout <<"Roll no is:"<<roll<<endl;
        for(int i=0; i<3; i++){
            cout <<"Marks of subjects is:"<<"[<<i<<]:"<<marks[i]<<endl;
            cout <<"Name :"<<name<<endl;
            
        }
    }
    int totallMarks(){
         int sum=0;
        for(int i=0; i<3; i++){
       
        sum= sum+marks[i];
     
        }
           return sum;
    }
    float avgMarks(){
        int sum=0;
        for(int i=0; i<3; i++){
            sum= sum+marks[i];
        }
        return sum/3.0;
        
    }
};
int main(){
    Result s;
    s.input();
    s.show();
    cout <<"Total marks:"<<s.totallMarks()<<endl;
    cout <<"Avrage marks is:"<<s.avgMarks()<<endl;
    return 0;
}