// static data member  a type of data members that is shared by all
// all obeject is called static data meber it declare by static
// keyword
#include <iostream>
using namespace std;
class yahoo{
    private:
    static int count;
    public:
    yahoo(){
        count++;
    }
    void show(){
        cout<<"you have created the "<<count<<"object so far"<<endl;

    }
};
int yahoo:: count=0;
int main(){
    yahoo y1, y2;
    y1.show();
    yahoo w;
    y2.show();
    return 0;
}