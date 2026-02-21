#include<iostream>

using namespace std;

class Number{
int x, y,z,m;

public :
Number(int a, int b)
    {
        x= a;
        y = b;
        cout<<x+y<<endl;
    }
    Number(int a, int b, int c)
    {
        x= a;
        y = b;
        z = c;
        cout<<x+y+z<<endl;
    }
    Number(int a, int b,int c, int d)
    {
        x= a;
        y = b;
        z = c;
        m = d;
        cout<<x+y+z+m<<endl;

    }


};

int main(){

    Number obj1(10,20);
    Number obj2(10,20,30);
    Number obj3(10,20,30,40);


};




