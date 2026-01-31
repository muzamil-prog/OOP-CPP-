#include <iostream>
using namespace std;

class Student {
public:
    static int studentCount;  // Static data member

    Student() {
        studentCount++;  // Increase count whenever a student is created
    }
};

// Definition outside the class
int Student::studentCount = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Total students: " << Student::studentCount << endl; // Output: 3
    return 0;
}
