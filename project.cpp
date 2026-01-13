#include <iostream>
using namespace std;
class book{
    private:
    string bookName;
    string bookTitle;
    string authar;
    int price;
    int year;
    public:
    //default constructer
    book(){
        cout <<"default constructer is called"<<endl;
        bookName="unknow";
        bookTitle="unknow";
        authar="unknow";
        price=0;
        year=0;
    }
    
    book(string n, string t, string a, int p, int y){
        cout <<"parameterized constructer is called"<<endl;
        bookName=n;
        bookTitle=t;
        authar=a;
        price=p;
        year=y;
    }
    // copy constructer
    book(const book &b){
        cout <<"copy constucter is called"<<endl;
        bookName=b.bookName;
        bookTitle=b.bookTitle;
        authar=b.authar;
        price=b.price;
        year=b.year;

    }
    
    void show(){
        cout <<"book name:"<<bookName<<endl;
        cout <<"book title:"<<bookTitle<<endl;
        cout <<"authar of book:"<<authar<<endl;
        cout <<"price is:"<<price<<endl;
        cout <<"year:"<<year<<endl;


    }
    void upDatePrice(int p){
        price = p;
    }
    void compair(const book &b){
        if(year>b.year){
            cout <<"book is new"<<endl;
        }else if(year<b.year){
            cout <<"the book is old"<<endl;
        }else{
            cout <<"the same year when book is published "<<endl;
        }
    }
    ~book(){
        cout <<"destructer is called"<<endl;
    }


};
int main(){
    book b1;
    book b2("english", "mr:chips", "muzammil", 300, 2025);
    book b3=b2;
    b1.show();
    b2.show();
    b3.show();
    b1.upDatePrice(400);
    b1.compair(b2);
    b2.upDatePrice(200);
    b2.compair(b3);
    b3.upDatePrice(90);
    


    return 0;

}