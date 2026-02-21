#include<iostream>

using namespace std;

class Samp{
    int i;

public:
    Samp(int n)
    {
        i=n;
    }
    int get_i()
    {
        return i;
    }

    int sqr_it(Samp o)
    {
        return o.get_i()* o.get_i();
    }

    Samp sqr_it(Samp o)
    {
        Samp obj(5);
        return obj;
    }


};


int main()
{
  Samp a(10), b(5);
  cout<< a.sqr_it(a)<<endl;
  cout<< b.sqr_it(b)<<endl;
  Samp sqr_it(Samp o)
  {
      Samp obj[5];
      return obj;
  }

}
