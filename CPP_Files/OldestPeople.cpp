#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
     Person(string n, int a){
        name = n ; age = a;
     } //: name(n), age(a) {}

    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    // Create an array of people
    Person people[] = {
        Person("Alice", 25),
        Person("Bob", 32),
        Person("Charlie", 28),
        Person("Diana", 45),
        Person("Eve", 38)
    };

    int size = 5;  // Number of people

    // Find the oldest person
    Person oldest = people[0];
    for (int i = 1; i < size; i++) {
        if (people[i].getAge() > oldest.getAge()) {
            oldest = people[i];
        }
    }

    cout << "Oldest person: " << oldest.getName()
         << " (" << oldest.getAge() << " years)" << endl;

    return 0;
}
