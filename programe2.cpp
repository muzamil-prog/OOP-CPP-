#include <iostream>
using namespace std;

class A {
public:
    virtual void show() { cout << "Base\n"; }
};

class B : public A {
public:
    void show() override { cout << "Derived\n"; }
};

int main() {
    A* p;
    B obj;
    p = &obj;
    p->show();
}
