#include <iostream>
using namespace std;
class Sorting{
    private:
    int arr[5]={56,78,33,81,12};
    int n=5;
    int min;
    int temp;
    public:
    void sortasc(){
        
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
    void display(){
        cout<<"this is ase order sorting:";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
     }
     cout <<endl;
    }
};
int main(){
    Sorting s;
    s.sortasc();
    s.display();
    return 0;
}