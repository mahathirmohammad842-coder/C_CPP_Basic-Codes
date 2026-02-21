#include<iostream>

using namespace std;

class base{
    int x=10;
public:
    int ret_x(){return x;}

    void setx(int n)
    {
        x=n;
    }
    void showx()
    {
        cout<<x;
    }
};


class derived : private base{

               int y;

public :


    void sety(int n)
    {
        y = n;
    }
    void show_sum()
    {
        cout<<ret_x()+y;
    }
    void showy(){cout<<y;}

};

int main()
{
    derived obj;
    obj.setx(10);
    obj.sety(20);
    obj.showx();
    obj.showy();
    void show_sum();


return 0;
}
