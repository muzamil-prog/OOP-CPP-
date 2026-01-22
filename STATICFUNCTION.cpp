#include <iostream>
using namespace std;

class Student {
public:
   static int studentCount;

    static void showCount() {// static function
        studentCount++;         
        cout << "Total students: " << studentCount << endl;
    }
};

int Student::studentCount = 5;

int main() {
    
   
    Student::showCount(); // Call without creating object
    Student::showCount();
    return 0;

}