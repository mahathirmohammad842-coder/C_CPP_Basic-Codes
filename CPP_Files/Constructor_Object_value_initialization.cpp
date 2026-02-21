#include<iostream>
using namespace std;


class Number{
    int x,y;
public:
    Number(int a, int b){x=a,y=b;}
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main(){
 Number num1(1,2),num2(3,4);

 num1.show();
 num2.show();

return 0;
}
