#include <iostream>
using namespace std;

class Car {
public:
    string company;
    string model;

    void setValue(string company, string model) {
        this->company = company;
        this->model = model;
    }

    void show() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
    }
};

int main() {
    const int n = 3;     
    Car *ptr[n];            
    string company[n], model[n];  

    
    for(int i = 0; i < n; i++) {
        ptr[i] = new Car();
    }
    cout << "Enter company name and model of 3 cars:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Car " << i+1 << ": ";
        cin >> company[i] >> model[i];
        ptr[i]->setValue(company[i], model[i]);
    }


    cout << "\nCar Details:\n";
    for(int i = 0; i < n; i++) {
        ptr[i]->show();
    }
}

    
