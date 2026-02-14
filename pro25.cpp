#include <iostream>
using namespace std;
class Numbers {
    private:
    int arr[5];
    int n=5;
    public:
    void input(){
        for(int i=0; i<n; i++){
            cout <<"enter the five element:"<<endl;
            cin >>arr[i];
        }
         cout<<endl;
    }

       
       void show(){
          for(int i=0; i<n; i++){
            cout <<arr[i]<<"  ";
          }
          cout <<endl;
       }
        
    void sqaure(){
        for(int i=0; i<n; i++){
            cout <<arr[i]*arr[i]<<"  ";
        }
        cout <<endl;
    }
    void cube(){
        for(int i=0; i<n; i++){
            int cube=arr[i]*arr[i]*arr[i];
            cout <<cube<<"  ";
        }
        cout <<endl;
    }
    void sum(){
            int totalSum=0;
          for(int i=0; i<n; i++){
            int sum;
            sum=arr[i]+arr[i]+arr[i];
            cout <<sum<<"  ";
            totalSum+=sum;
          }
        cout <<endl;
        cout <<"The total sum is"<<totalSum<<endl;
    }
};
int main(){
    Numbers n1;
    n1.input();
    n1.show();
    n1.sqaure();
    n1.sum();
    return 0;
    

}