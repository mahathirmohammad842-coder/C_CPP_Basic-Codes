#include<iostream>

using namespace std;

class Number{
public :
    int x,y;
void setvalue()
{
x=10;
y=20;
}

void show(){
cout<<x<<"  "<<y<<endl;

}
};

int main()
{
    Number obj1,obj2;


    obj1.setvalue();
    obj2.setvalue();
    obj1.show();
    obj2.show();

return 0;
}
