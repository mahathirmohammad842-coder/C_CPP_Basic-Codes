#include<iostream>
#include<bits/stdc++.h>


using namespace std;

    class Numbers{
    protected:

        int a,b;


  friend void friendFunction(Numbers &obj);
public:
    Numbers()
    {
        a = 10; b = 20;
    }


};


void friendFunction(Numbers &obj)
{
    cout<<obj.a+obj.b<<endl;
}


int main()
{
    Numbers obj;
    friendFunction(obj);
};

