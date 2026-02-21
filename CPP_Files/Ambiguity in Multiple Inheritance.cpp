#include<iostream>
using namespace std;


class A
{
public:
    int x;
    void setx(int a)
    {
        x = a;
    }
};

class B : virtual public A
{
public:
    int add()
    {
        return x+x;
    }
};

class C : virtual public A
{
    public:
        int mult()
        {
            return x*x;
        }
};

class D: public B, public C
{

};

int main()
{
    D obj;

    obj.setx(10);

    cout<<obj.add()<<endl;//20
    cout<<obj.mult()<<endl; //100

return 0;
}
