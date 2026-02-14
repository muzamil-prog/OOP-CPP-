#include <iostream>
using namespace std;
int main(){
    int age[4];
    int n=4;    
    int count=0;
    cout <<"enter the age of"<<n<<"person"<<endl;
    for(int i=0; i<n; i++){
        cin >>age[i];
    }
    cout <<endl;

    for(int i=0; i<4; i++){
        if(age[i]>=50 && age[i]<=60 ){
            count=count+1;
        }
    }
    cout <<count<<" are person the age between 50 or 60"<<endl;
    return 0;
    
}