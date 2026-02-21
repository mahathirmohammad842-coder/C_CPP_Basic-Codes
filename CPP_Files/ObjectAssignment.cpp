#include<iostream>

using namespace std;

class Myclass{
    int a, b;

public:
    void seta(int i, int j)
    {
        a=i; b=j;
    }

    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }

};


int main()
{
  Myclass o1,o2;
  o1.seta(10,20);
  o2=o1;

  o1.show();
  o2.show();

return 0;
};
