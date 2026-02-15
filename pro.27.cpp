#include<iostream>
using namespace std;
class Find{
    int arr[10]={12,32,34,43,53,5,3,23,43,54};
    int n=10;
    int loc=-1;
    
    int required= 53;
    public:
    void show(){
        
        for(int i=0; i<n; i++){
          
            if(arr[i]==required){
                  loc=i;
                cout<<"the numbr is found at index:"<<loc;
                return ;

        }
        
        
    }
        cout <<"the number is not found"<<endl;

}
};
int main(){
    Find f;
    f.show();
    return 0;
}