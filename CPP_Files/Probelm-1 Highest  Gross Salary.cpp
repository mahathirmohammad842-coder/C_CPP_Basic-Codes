#include <iostream>
using namespace std; //For better use array

class Employee {
    int id;
    int salary;
    string name;
    double gross;

public:
    Employee() {}
    Employee(int i, string n, int s) {
        id = i;
        name = n;
        salary = s;
        gross = s + s * 0.2 + s * 0.1;
    }
     double getGross() {
        return gross;
    }

    void display() {
        cout << "ID: "<<id<<endl;
        cout<<" Name: " << name<<endl;
        cout << " Salary: " << salary << endl;
        cout<<" Gross: " << gross << endl;
    }

};


int main() {
    int total;

    cout<<"Enter total number of Employee  : ";
    cin >> total;
    Employee A[total];

    for (int i = 0; i < total; i++) {
            int id, salary;
            string name;

            cout << "Enter ID, Name, Salary for Employee " << i + 1 << ": ";
            cin >> id >> name >> salary;

            A[i]= Employee(id,name ,salary);
}

  int maxIndex = 0;
    double maxGross = A[0].getGross();

    for (int i = 1; i < total; i++) {
        if (A[i].getGross() > maxGross) {
            maxGross = A[i].getGross();
            maxIndex = i;
        }
    }

    cout << "\nEmployee with Highest Gross Salary:\n";
    A[maxIndex].display();



return 0;
}
