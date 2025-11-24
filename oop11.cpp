#include <iostream>
#include <cstring>
using namespace std;
class book{
    private:
    int bookNo;
    char bookTitle[20];
    float price;
    float total_cost(int n){
        return n*price;
    }
    public:
    void in(){
        cout <<"enter the book no"<<endl;
        cin>>bookNo;
        cin.ignore();
        cout <<"enter the book title max chararacter 20 you include"<<endl;
        cin.getline(bookTitle, 21);
        cout <<"enter price per copy"<<endl;

    }
    void purchase(){
        int N;
        cout <<"enter no copies you want to purchese"<<endl;
        cin>>N;
        float tatal_cost(N);
        cout <<"toatal cost is to be paid"<<total_cost<<endl;
    }

    

};
int main(){
    book myBook;
    myBook.in();
    myBook.purchase();
    return 0;
}