#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Some sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog barks\n"; }
};

int main() {
    Animal* a = new Dog;
    a->sound();
    delete a;
}
