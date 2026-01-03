#include <iostream>
using namespace std;

class book {
public:
    string title;
    float price;

    void setValue(string title, float price){
        this->title = title;
        this->price = price;
    }
    void show() {
        cout << "Name: " << title<< endl;
        cout << "Salary: " << price<< endl;
    }
};

int main() {
    book *ptr[4];   
    string title[4]; 
    float price[4];   

    for(int i = 0; i < 3; i++) {
        ptr[i] = new book();
    }

    cout << "enter the title and price of book:" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "book " << i+1 << ": ";
        cin >> title[i] >> price[i];   // input both
        ptr[i]->setValue(title[i], price[i]);
    }

    cout << "\nEmployee Details:\n";
    for(int i = 0; i < 4; i++) {
        ptr[i]->show();
    }

    for(int i = 0; i < 4; i++) {
        delete ptr[i];
    }

    return 0;
}
