#include <iostream>
using namespace std;
class Reverse{
    private:
    int arr[5]={1,2,3,4,5};
    int n =5;
    public:
    void show(){
        for(int i=n-1; i>n; i--){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
};
int main(){
    Reverse r;

    
    cout <<"hello muzammil what you are doing :";
    r.show();
    return 0;

}