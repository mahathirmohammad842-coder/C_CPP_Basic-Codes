#include<iostream>
using namespace std;
class truck;

class car
{
    int passenger;
    int speed;


public:
    car(int p , int s)
    {
        passenger = p;
        speed = s;
    }

friend int sp_greater(car c,truck t);


};


class truck
{
    int weight; int speed;

public:

    truck(int w, int s)
    {
        weight = w;
        speed = s;
    }

friend int sp_greater(car c,truck t);

};


int sp_greater(car c, truck t)
{
    return c.speed-t.speed;

}

int main()
{
    int s;

    car c(5,60);
    truck t(4000,55);


    s = sp_greater(c,t);

    if(s<0)
    {
        cout<<"Truck is Faster"<<endl;
    }

    else if(s==0)
    {
        cout << "Same Speed"<<endl;
    }
    else {cout<<"Car is Faster"<<endl;}



return 0;

}
