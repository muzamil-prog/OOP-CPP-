// member function with array 
// member function define outside of the class with help of scope 
// resulation operater 
// 
#include <iostream>
using namespace std;
class Array{
    private:
    int arr[5];
    public:
    void fill();
    void show();
    int maxNumber();
    int minNumber();
};
void Array:: fill(){
      cout <<"Enter the five numbers:"<<endl;
    for(int i=0; i<5; i++){
      cout <<"Enter number["<<i<<"]:"<<endl;
        cin >>arr[i];
    }
}
void Array:: show(){
    cout <<"you enter the following values:"<<endl;
    for(int i=0; i<5; i++){
        cout <<"arr["<<i<<"]:"<<arr[i]<<endl;
    }
}
int Array:: maxNumber(){
    int m=arr[0];
    for(int i=0; i<5; i++){
        if(m < arr[i]){
            m=arr[i];
            

        }
    }
    return m;
}
int Array:: minNumber(){
    int m= arr[0];
    for(int i=0; i<5; i++){
        if(m > arr[i]){
            m= arr[i];
            
        }
    }
    return m;

}
int main(){
    Array a;
    a.fill();
    a.show();
    cout<<"the max the number of this :"<<a.maxNumber()<<endl;
    cout <<"the min the number of this:"<<a.minNumber()<<endl;
    return 0;
}
