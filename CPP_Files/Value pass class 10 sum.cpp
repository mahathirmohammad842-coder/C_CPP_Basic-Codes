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


void update(int a){
x+=a;
y+=a;

}

void show(){
cout<<x<<"  "<<y<<endl;
}
};

int main()
{
    int a,b,c,d;

    //cin>>a;

    Number obj1,obj2;

    obj1.setvalue(10,20);
    obj2.setvalue(30,40);

    obj1.update(10);
    obj2.update(10);
    obj1.show();
    obj2.show();

return 0;
}


