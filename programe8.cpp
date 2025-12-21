#include <iostream>
using namespace std;
class book{
private:
string title;
int page;
public:
void setValue(string title, int page){
    this->title=title;
    this->page=page;
}
void show(book  &obj){
    cout <<"the title of book is:"<<obj.title<<endl;
    cout <<"the page of the book:"<<obj.page<<endl;
}
};
int main(){
    book b1;
    b1.setValue("mr: chips", 322);
    b1.show(b1);
    return 0;
}