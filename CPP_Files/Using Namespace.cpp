#include <iostream>
#include <string>
using namespace std;

// Define a namespace
namespace StudentSpace {
    class Student {
    public:
        string name;
        int id;

        void display() {
            cout << "Name: " << name << ", ID: " << id << endl;
        }
    };
}

int main() {
    // Create object using namespace
    StudentSpace::Student s;
    s.name = "Mahathir";
    s.id = 101;
    s.display();

    return 0;
}
