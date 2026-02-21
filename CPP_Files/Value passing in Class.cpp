#include<iostream>

using namespace std;

class Number{
public :
    int x,y;

void setvalue(int a, int b)
{
x=a;
y=b;
}

void show(){
cout<<x<<"  "<<y<<endl;
}
};

int main()
{
    int a,b,c,d;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    Number obj1,obj2;

    obj1.setvalue(a,b);
    obj2.setvalue(c,d);
    obj1.show();
    obj2.show();

return 0;
}

