#include<iostream>
using namespace std;

class A{
           int x;
public:

    A(int a)
    {
        cout<<"Constructing base"<<endl;
        x=a;
    }

    ~A(){
        cout<<"Destructing base"<<endl;
        }

    void showx()
    {
        cout<<x<<endl;
    }
};

class B: public A{
          int y;
public:

    B(int a, int b):A(a)
    {
        cout<<"Constructing derived"<<endl;
        y=b;
    }


    ~B(){
        cout<<"Destructing derived"<<endl;
        }

    void showy()
    {
        cout<<y<<endl;
    }
};


class C: public B{
               int z;
public:

    C(int a, int b,int c):B(a, b)
    {
        cout<<"Constructing"<<endl;
        z=c;
    }

    ~C(){
        cout<<"Destructing"<<endl;
        }

    void showz()
    {
        cout<<z<<endl;
    }
};


int main()
{
    C obj(1,2,3);

  obj.showx();
  obj.showy();
  obj.showz();
}
