#include<iostream>

using namespace std;

class Number{
private :
    int a,b,c,m;
    float n;

public :
    void takeinput(int x, int y, int z)
    {
    a=x;
    b=y;
    c=z;
    }
void do_sum()
{
m=a+b+c;
}
void do_average(){

n = m/3.0;

}


void show(){

cout<<" Sum "<<sum<<"avrg "<<n<<endl;
}
};

int main()
{
    int x,y,z;

    cin>>x>>y>>z;

    Number obj;

    obj.takeinput(x,y,z);
    obj.sum();
    obj.average();
    obj.show();

return 0;
}


