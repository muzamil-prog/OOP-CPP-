#include <iostream>
using namespace std;
class student{
    protected:
    int rollNo=22;
    
};
class searchstudent: public student{
    public:
    void show(){
        cout <<"the roll no of the studet is"<<rollNo<<endl;
    }
};
int main(){
    searchstudent*s;
    s= new searchstudent;
    s->show();
    return 0;
    delete s;
}