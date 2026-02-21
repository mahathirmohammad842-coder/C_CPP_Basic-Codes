#include<iostream>
using namespace std;
class Teacher;

class student
{
        int age;
        float cgpa;
        double id;


    public:
        student(int a , float c,double i)
        {
            age = a;
            cgpa= c;
            id = i;
        }

    friend int age_greater(student s,Teacher t);


};


class Teacher
{
    int age; string Rank; string dept;

public:

    Teacher(int a, string R, string d)
    {
        age = a;
        Rank = R;
        dept = d;
    }

friend int age_greater(student s,Teacher t);

};


int age_greater(student s,Teacher t)
{
    return s.age-t.age;

}

int main()
{
    int g;

    student s(25,3.14,012504000);
    Teacher t(41,"Assistant Professor","CSE ");


    g = age_greater(s,t);

    if(g<0)
    {
        cout<<"Teacher > Student"<<endl;
    }

    else if(g==0)
    {
        cout << "Age is Same"<<endl;
    }
    else {cout<<"Student > Teacher"<<endl;}



return 0;

}
