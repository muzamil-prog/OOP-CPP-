#include <iostream>
#include <cmath>
using namespace std;
class simpleCalculater{
    public:
    int a;
    int b;
    
     void setValue(){
        cout <<"enter the value of first number:"<<endl;
        cin >>a;
        cout <<"enter the value of scond the number "<<endl;
        cin>>b;
    }
     void show(){
        char operater;
        cout <<"enter your the operater:"<<endl;
        cin >>operater;
        if(operater=='+'){
            cout <<"result:"<<a+b<<endl;
        }else if(operater=='-'){
            cout <<"result :"<<a-b<<endl;
        }else if(operater=='*'){
            cout <<"rsult :"<<a*b<<endl;
        }else if(operater=='/'){
            cout <<"rsult:"<<a/b<<endl;
        }else{
            cout <<"you enter in valid operater"<<endl;
        }

     } 
   
    
};
class scientficCalculater:public simpleCalculater{
    public:
    
    void showscientfic(){
         char operater;
        cout <<"enter your the operater:"<<endl;
        cin >>operater;
        if(operater='+'){
            cout <<"result:"<<a+b<<endl;
        }else if(operater=='-'){
            cout <<"result :"<<a-b<<endl;
        }else if(operater=='*'){
            cout <<"rsult :"<<a*b<<endl;
        }else if(operater=='/'){
            cout <<"rsult:"<<a/b<<endl;
        }else if(operater=='s'){
            cout<<"result:"<<sin(a)<<endl;

        }else if(operater=='c'){
            cout <<"result"<<cos(a)<<endl;
        }
        else if(operater=='t'){
            cout <<"result:"<<tan(a)<<endl;
        }else{
            cout <<"you enter the in valid operater please enter the valid operater"<<endl;
        }


     } 
    




    };
    int main(){
        scientficCalculater s;
        s.setValue();
        s.show();
        // s.setValue();
        // s.showscientfic();
        return 0;

    }

