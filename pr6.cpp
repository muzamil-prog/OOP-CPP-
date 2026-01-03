#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float marks;

    void setValue(string n, float m) { name = n; marks = m; }
};

int main() {
    Student *s[3];
    string n; float m;

    
    for(int i=0; i<3; i++) s[i] = new Student();

    for(int i=0; i<3; i++) {
        cin >> n >> m;
        s[i]->setValue(n, m);
    }


    int top = 0;
    for(int i=1; i<3; i++)
        if(s[i]->marks > s[top]->marks) top = i;

    cout << "Topper: " << s[top]->name << " with marks " << s[top]->marks << endl;

    
    for(int i=0; i<3; i++) delete s[i];

    return 0;
}
