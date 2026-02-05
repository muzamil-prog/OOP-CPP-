// static function that are used to acsess static data member 
// static function that can be acsess without any object of the class is callled static function
// why without object  so static data member of class is not created for each object so it share for all object no  matter how many object are created  
// the static data member is define when programe is excuted 
// the programe may requre to access static data member before creating a object 
#include <iostream>
using namespace std;
class student{
    private:
    static int rollNo;
    public:
    static void  show(){
    cout <<"the roll no of the student is :"<<rollNo<<endl;


    }
};
int student:: rollNo=22;
int main(){
    student::show();
    return 0;
}