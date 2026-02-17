#include <iostream>
using namespace std;
class BinerySearch{
    int arr[20]={12,34,34,54,56,45,34,23,43,42,53,53,65,34,65,5664,78,97,34,34};
    int n=20;
     int requried=56;
    int start=0;
    int end=19;
    int loc=-1;
    public:
    void show(){
        int mid=(start+end)/2;
        for(int i=0; i<n; i++)
        if(arr[mid]==requried){
            loc=mid;
            break;

        }else if(arr[mid]<requried){
            mid--;
        }else{
            mid++;
        }
        if(loc==-1){
            cout <<"number is not found"<<endl;
        }else{
            cout <<requried<<"the indes is find at"<<loc<<endl;
        }


    }
};
int main(){
    BinerySearch b;
    b.show();
    return 0;
}