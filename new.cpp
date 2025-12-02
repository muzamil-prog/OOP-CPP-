// it is the list of parameters passed tothe constructor of parect class 
#include <iostream>
using namespace std;
class parent{
    protected:
    int n;
    public:
    parent(){
        n=0;
    }
    parent(int p){
        n=p;
    }
    void show(){
        cout <<"n"<<n<<endl;

    }
};
class chield:public parent{
    private:
    char ch;
    public:
    chield():parent(){
        ch='x';
    }
    chield(char c, int m): parent(m){ 
        ch=c;


    }
    void diplay(){
        cout <<"ch="<<ch<<endl;
    }
}; 
int main(){
chield ob1;
chield ob2('w' , 299);

cout <<"obj1 is as follows"<<endl;
ob2.show();
ob2.diplay();
return 0;

}