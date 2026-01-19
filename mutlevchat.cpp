#include <iostream>
using namespace std;

// ----------- Base Class -----------
class Person {
public:
    string name;
    int age;

    Person(const string& name, int age) {
        this->name = name;
        this->age = age;
    }
};

// ----------- Derived Class (Level 2) -----------
class Student : public Person {
public:
    int rollNo;

    Student(const string& name, int age, int rollNo)
        : Person(name, age) 
    {
        this->rollNo = rollNo;
    }
};

// ----------- Derived Class (Level 3) -----------
class DepartmentStudent : public Student {
public:
    string department;

    DepartmentStudent(const string& department, const string& name, int age, int rollNo)
        : Student(name, age, rollNo) 
    {
        this->department = department;
    }

    void show() const {
        cout << "Name: "        << name       << endl;
        cout << "Age: "         << age        << endl;
        cout << "Roll No: "     << rollNo     << endl;
        cout << "Department: "  << department << endl;
    }
};

// ----------- Main Function -----------
int main() {
    DepartmentStudent student("IT", "Ali", 22, 33);
    student.show();

    return 0;
}
