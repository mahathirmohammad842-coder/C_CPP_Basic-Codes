#include<iostream>
using namespace std;

class Number{
public:
int a, b;

Number(int x, int y){
a = x; b = y;}

void show(){cout << a<<" " <<b; }


Number operator + (Number obj){

Number temp(0,0);

temp.a = a+ obj.a;
temp.b = b + obj.b;

return temp;
}

};

int main(){
    Number obj1(1,2),obj2(3,4),obj3(0,0);

    obj3 = obj1 + obj2;
    obj3.show();
return 0;
}
