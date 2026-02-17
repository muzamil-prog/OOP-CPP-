#include <iostream>
using namespace std;
class sort{
    private:
    int arr[20]={12,34,53,53,67,23,23,53,64,64,23,67,75,86,12,85,86,34,89,23};
    int n=20;
    int min;
    int temp;
    public:
    void show(){
        for(int i=0; i<n-1; i++){
            min=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[min]){
                    min=j;
                    
                }
            }
             temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        }
       
    }
    void sho(){
        cout <<"the ase order sorting:";
        for(int i =0; i<n; i++){
            cout <<arr[i]<<"  ";
        }
        cout <<endl;
    }
};
int main(){
    sort s;
    s.show();
    s.sho();
    return 0;
}