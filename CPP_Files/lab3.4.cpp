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
        a = 10;
        b = 20;
    }




};

void friendFunction(Numbers &obj)
{
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;

    cout << obj.a << endl;
    cout << obj.b << endl;
}

//void friendFunction(Numbers &obj)
//{
    //cout<<obj.a+obj.b<<endl;
    //obj.a = 100;
    //obj.b = 200;
//}


int main()
{
    Numbers obj;
    friendFunction(obj);
    //friendFunction(obj);
};
