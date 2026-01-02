#include <iostream>
using namespace std;

class student {
private:
    string name;
public:
    void setNAme(string name) {
        this->name = name;
    }
    void show() {
        cout << "The name of student: " << name << endl;
    }
};

int main() {
    student *ptr[3];   // array of pointers
    string arr[3];    
    for(int i = 0; i < 3; i++) {
        ptr[i] = new student();
    }

    
    cout << "enter the name of students:"<<endl;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        ptr[i]->setNAme(arr[i]);
    }
    for(int i = 0; i < 3; i++) {
        ptr[i]->show();
    }
    for(int i = 0; i < 3; i++) {
        delete ptr[i];
    }

    return 0;
}
