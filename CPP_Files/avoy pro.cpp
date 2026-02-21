#include<iostream>
using namespace std;
class Base{
private:
    int x,y;
public:
    void setvalue(int a,int b){
    x=a;
    y=b;
    }
    void show(){
    cout<<x+y<<endl;
    }
};
class derived:public Base{
private:
    int z;
public:
    void set(int c){
    void setvalue(int a,int b);
    z=c;
    }
    void sshow(){
        void show();
        cout<<x+y+z<<endl;
    }
};

