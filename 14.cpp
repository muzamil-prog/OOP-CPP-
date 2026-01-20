#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// --------------------- BASE CLASS ---------------------
class Person {
protected:
    string name;
    int age;

public:
    Person(string name = "", int age = 0)
        : name(name), age(age) {}

    string getName() const { return name; }
};


// --------------------- STUDENT CLASS ---------------------
class Student : public Person {
protected:
    string department;

public:
    Student(string dept = "", string name = "", int age = 0)
        : Person(name, age), department(dept) {}
};


// --------------------- GRADUATE STUDENT CLASS ---------------------
class GraduateStudent : public Student {
private:
    double cgpa;
    string thesis;

public:
    GraduateStudent(double cgpa = 0.0, string thesis = "",
                    string dept = "", string name = "", int age = 0)
        : Student(dept, name, age),
          cgpa(cgpa), thesis(thesis) {}

    void showDetails() const {
        cout << "\n---------------------------\n";
        cout << "Name:        " << name << endl;
        cout << "Age:         " << age << endl;
        cout << "Department:  " << department << endl;
        cout << "CGPA:        " << cgpa << endl;
        cout << "Thesis:      " << thesis << endl;
        cout << "---------------------------\n";
    }

    string getName() const { return name; }
};


// --------------------- SYSTEM / MENU ---------------------
class GraduateSystem {
private:
    vector<GraduateStudent> students;

public:
    void addStudent() {
        string name, dept, thesis;
        int age;
        double cgpa;

        cout << "\nEnter Student Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, dept);

        cout << "Enter CGPA: ";
        cin >> cgpa;

        cout << "Enter Thesis Title: ";
        cin.ignore();
        getline(cin, thesis);

        students.push_back(GraduateStudent(cgpa, thesis, dept, name, age));

        cout << "\n✔ Student Added Successfully!\n";
    }

    void showAll() {
        if (students.empty()) {
            cout << "\nNo records found.\n";
            return;
        }

        cout << "\n==== All Graduate Students ====\n";
        for (const auto &s : students) {
            s.showDetails();
        }
    }

    void searchStudent() {
        if (students.empty()) {
            cout << "\nNo records found.\n";
            return;
        }

        string searchName;
        cout << "\nEnter name to search: ";
        cin.ignore();
        getline(cin, searchName);

        bool found = false;
        for (const auto &s : students) {
            if (s.getName() == searchName) {
                cout << "\n✔ Record Found:\n";
                s.showDetails();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "\n✖ No student found with that name.\n";
        }
    }
};


// --------------------- MAIN FUNCTION ---------------------
int main() {
    GraduateSystem system;
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "   Graduate Student System\n";
        cout << "==============================\n";
        cout << "1. Add Graduate Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student by Name\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addStudent();
                break;

            case 2:
                system.showAll();
                break;

            case 3:
                system.searchStudent();
                break;

            case 4:
                cout << "\nExiting... Goodbye!\n";
                break;

            default:
                cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
