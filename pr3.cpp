#include <iostream>
using namespace std;

class employee {
public:
    string name;
    float salary;

    void setValue(string name, float salary){
        this->name=name;
        this->salary=salary;
    }
    void show() {
        cout << "name"<<name<<endl;
        cout <<"salary"<<salary<<endl;
    }
};

int main() {
    employee *ptr[3];   
    string name[3]; 
    float salary[3];   
    for(int i = 0; i < 3; i++) {
        ptr[i] = new employee();
    }

    
    cout << "enter the name of emplyee and its salary:"<<endl;
    for(int i = 0; i < 3; i++) {
        cin >> name[i];
        ptr[i]->setValue(name[i], salary[i]);
    }
    for(int i = 0; i < 3; i++) {
        ptr[i]->show();
    }
    for(int i = 0; i < 3; i++) {
        delete ptr[i];
    }

    return 0;
}
