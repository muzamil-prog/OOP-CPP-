#include <iostream>
using namespace std;

class student {
private:
    int  rolNo;
public:
    void setrollno(int r){
     rolNo=r;
    }
    void show() {
        cout << "The roll no of student"<<rolNo<<endl;
    }
};

int main() {
    student *ptr[5];   
    int arr[5];    
    for(int i = 0; i < 3; i++) {
        ptr[i] = new student();
    }

    
    cout << "enter the rooll no of students:"<<endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        ptr[i]->setrollno(arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        ptr[i]->show();
    }
    for(int i = 0; i < 5; i++) {
        delete ptr[i];
    }

    return 0;
}
