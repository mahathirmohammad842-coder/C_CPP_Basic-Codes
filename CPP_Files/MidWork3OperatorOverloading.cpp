#include<iostream>
using namespace std;
class Number{
public:
    int x,y;
    Number(int a,int b){
        x=a;
        y=b;
    }
    void show(){
        cout<<x<<" "<<y<<endl;
    }
    int operator<(Number obj){
        if(x<obj.x && y<obj.y)
            return 1;
        else
            return 0;
    }
    Number operator-(Number obj){
        Number temp(0,0);
        temp.x=x-obj.x;
        temp.y=y-obj.y;
        return temp;
    }
     Number operator+(Number obj){
        Number temp(0,0);
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return temp;
    }
    Number operator++(int){
        Number temp(0,0);
        x++;
        y++;
        return temp;
    }
};
int main(){
    Number n1(0,0);
    Number n2(3,4);
    Number n3(4,5);
    n1=n2;
    if(n1<n3){
    n2=n3-n1;
    n1++;
    }
    cout<<"n1= ";
    n1.show();
    cout<<"n2= ";
    n2.show();

    n1= n3+n2;
    n1.show();

return 0;
}
