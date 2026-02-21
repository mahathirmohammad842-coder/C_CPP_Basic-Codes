#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grade1, grade2, grade3;

public:
    Student(string n) {
        name = n;
        grade1 = grade2 = grade3 = 0;
    }

    void add_grades(int g1, int g2, int g3) {
        if (g1 >= 0 && g1 <= 100) grade1 = g1;
        if (g2 >= 0 && g2 <= 100) grade2 = g2;
        if (g3 >= 0 && g3 <= 100) grade3 = g3;
    }

    void show_info() {
        double avg = (grade1 + grade2 + grade3) / 3.0;
        cout << "Name: " << name << ", Average: " << avg << endl;
    }
};

int main() {
    Student s1("Rahim"), s2("Karim"), s3("Tarim");

    s1.add_grades(85, 90, 78);
    s2.add_grades(92, 88, 95);
    s3.add_grades(70, 75, 80);

    s1.show_info();
    s2.show_info();
    s3.show_info();

    return 0;
}
