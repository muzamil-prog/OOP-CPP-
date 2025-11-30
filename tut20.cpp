
#include <iostream>
using namespace std;
class book{
    private:
    int bookNo;
    char bookTitle[20];
    float price;
    float totle_cost(int N){
     return price*N;
    }
    public:
    void input(){
        cout <<"enter the book no:"<<endl;
        cin >> bookNo;        cout <<"enter the bookTitle:"<<endl;
        cin >> bookTitle;
        cout <<"enter the price per copy:"<<endl;
        cin >> price;

    }
    void parchase(){
        int n;
        cout <<"enter the number of copy you want to be perchase:"<<endl;
        cin >>n;
        int total= totle_cost(n);
        cout <<"you must be  tattal paid is :"<<total<<endl;
    }

};
int main(){
    book mybook;
    mybook.input();
    mybook.parchase();
    return 0;
}
