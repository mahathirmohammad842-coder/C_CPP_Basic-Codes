#include<iostream>

using namespace std;

class Number{

int x;
string name;

public :

    Number(int a,string n)
    {
        x=a;
        name = n;
    }
    ~Number(){ cout<<"Destructing"<<endl ;}

    void show()
    {
        cout<<"Name : " <<name<<endl;
        cout<<"ID : " <<x<<endl;
    }



};

/*class CGPA{
    string name;
    float cgpa;

public:
    void add_cgpa(float cg)
    { if (cg >= 2.5 && cg <= 4)
        cgpa = cg;

        else { cout<<"Invalid input "<<endl;}
    }

    void show_cg()
    {
        cout<<"CGPA is : " << cgpa<<endl;
    }



}; */



int main()
{
    Number o1(15,"Avoy");
   // cout<<"Enter cgpa : " <<endl;
    Number o2(16,"Mahathir");
    //cout<<"Enter cgpa : " <<endl;
    Number o3(17,"Esha");
    //cout<<"Enter cgpa : " <<endl;


    o1.show();
    o2.show();
    o3.show();

};
