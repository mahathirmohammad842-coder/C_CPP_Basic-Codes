#include<iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    void setab(int n , int m)
    {
        a = n; b = m;
    }
 };
class derived: protected base
    {
        int c;
public:
    void setc(int n)
    { setab(a, b);
        c = n;
    };
    void showabc()
    {
        cout<<a<<b<<c<<endl;
    }
};


int main()
{
    derived obj;

//obj.setab(1,2); can not be accessed
obj.setc(3);
obj.showabc();
}






