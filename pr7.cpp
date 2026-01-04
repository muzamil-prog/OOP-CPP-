#include <iostream>
using namespace std;

class employee {
private:
    int id;
    string name;
public:
    void set(int id, string name){
        this->id = id;
        this->name = name;
    }

    int getId() { return id; }
    string getName() { return name; }
};

int main(){
    employee *e[5];
    for(int i = 0; i < 5; i++){
        e[i] = new employee();
        int id; 
        string name;
        cout << "Enter ID & name: ";
        cin >> id >> name;
        e[i]->set(id, name);
    }

    int searched;
    cout << "Enter ID to search: ";
    cin >> searched;

    for(int i = 0; i < 5; i++){
        if(e[i]->getId() == searched){
            cout << "Employee found: " << e[i]->getName() << endl;
            
            for(int j = 0; j < 5; j++) delete e[j];
            return 0;
        }
    }

    cout << "Employee not found" << endl;

    
    for(int i = 0; i < 5; i++) delete e[i];

    return 0;
}
