#include <iostream>
using namespace std;
class Array{
    private:
    int arr[5];
    public:
    Array(){
        for(int i=0; i<5; i++){
            arr[i]=-1;
        }
    }
    void input(int index, int value){
        if(index>=0 && index <5){
            arr[index]=value;
        }else{
            cout <<"invalid index out of range:"<<endl;
        }
        // cout <<"Enter the five elemnet:"<<endl;
        // for(int i=0; i<5; i++){
        //     cin >>arr[i];
        // }
        // cout <<endl;

    }
    void show(){
        for(int i=0; i<5; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
    int operator ==(Array other){
        for(int i=0; i<5; i++){
            if(arr[i]==other.arr[i]){
                return 1;
            }else{
               return 0;
            }
        }

    }
};
int main(){
    Array a1, a2;
    a1.input(0,1);
    a1.input(1,2);
    a1.input(2,3);
    a1.input(3,4);
    a1.input(4,5);

    a2.input(0,1);
    a2.input(1,2);
    a2.input(2,3);
    a2.input(3,4);
    a2.input(4,5);

    cout<<"array of 1:"<<endl;
    a1.show();
    cout <<"array of 2:"<<endl;
    a2.show();
    if(a1==a2){
        cout <<"both array are same:"<<endl;
    }else {
        cout <<"array are defferent:"<<endl;
    }
    return 0;

}


// write the class aray that contains an array of intergers data member  the class should following member functions a constructor that intilializes the aray elememnt to -1 input function to input the vvalues in the array  show function to display the values of the arrray overload  == operator to cmpare the alues of weo objects the overlad function retrun 1 if all values of bothe object are same ohter wise 0 