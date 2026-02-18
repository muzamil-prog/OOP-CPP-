#include <iostream>
using namespace std;
class sort{
    private:
    int arr[10]={45,12,78,12,34,90,1,34,56,1};
    int n=10;
    int min;
    int temp;
    int counter=0;
    public:
    void show(){
        for(int i=0; i<n-1; i++){
            min=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[min]){
                    min=j;
                    
                }
            }
             if(min !=i){
                temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        counter++;

             }
        }
       
    }
    void sho(){
        cout <<counter<<"Required swap element:";
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