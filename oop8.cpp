#include <iostream>
using namespace std;
class book{
    private:
    string title;
    int pages;
    public:
    book(string t, int p){
        title=t;
        pages=p;
    }
    book(const book &b){
        title=b.title;
        pages=b.pages;
        cout <<"copy constructer is called"<<endl;
    }
    void showData(){
        cout <<"title="<<title<<endl;
        cout <<"pages"<<pages<<endl;
    }
};
int main(){
    book b1("muzammil", 129);
    b1.showData();
    return 0;
}