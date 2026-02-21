#include<iostream>

using namespace std;

class base
{
public:
    base(){cout<<"Constructing Base"<<endl;}
    ~base(){cout<<"Destructing Base"<<endl;}
   };


class derived: public base
{
public:
    derived(){cout<<"Constructing Derived"<<endl;}
    ~derived(){cout<<"Destructing Derived"<<endl;}
};

int main()
{
    derived obj;
    return 0;
}


