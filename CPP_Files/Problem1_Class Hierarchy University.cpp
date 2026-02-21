#include<iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void set_name_age(string n, int a)
    {
        name = n; age = a;
    }

    void display()
    {
        cout<< "Name : "<<name<<endl;
        cout<< "Age : "<<age<<endl;
    }


};


class student : public Person
{

protected:
        int rollNumber;
public:
    void set_rollNumber(int x)
    {
        rollNumber = x;
    }

    void show()
    {
            display();
            cout<< "Roll Number : "<<rollNumber<<endl;
    }
};


class GraduateStudent : public student
{
private :
    string researchTopic;

public:
    void set_researchTopic(string rtopic)
    {
        researchTopic = rtopic;
    }

    void show2()
    {
            show();
            cout<< "Research Topic : "<<researchTopic<<endl;
    }

};


int main()
{
    GraduateStudent S1;

    S1.set_name_age("Mahathir", 21);
    S1.set_rollNumber(16);
    S1.set_researchTopic("AI in Education");

    S1.show2();
}
