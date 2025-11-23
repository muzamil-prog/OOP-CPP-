#include <iostream>
#include<cstring>
using namespace std;
class book{
    private:
    int boookno;
    char bookTitle[20];
    float price;
   float total_cost(int n){
    return price*n;
   }
   public:
   void input(){
    cout <<"enter the book no"<<endl;
    cin>>boookno;
    cin.ignore();
    cout <<"enter the book title max char is 20"<<endl;
    cin >>bookTitle;
    cin.getline(bookTitle,21);
    cout <<"enter your price per copy"<<endl;
    cin >>price;
   }
   void purchase(){
    int N;
    cout <<"enter your no of copies you want to be purchase now"<<endl;
  cin >>N;
  float total=  total_cost(N);
  cout <<"you paid  total cost"<<total;
   }
};
int main(){
    book myBook;
    myBook.input();
    myBook.purchase();
    return 0;
}