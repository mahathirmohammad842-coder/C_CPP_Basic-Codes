#include<iostream>
#define IN_RANGE(x) ((x) >= -10000 && (x) <= 10000)


using namespace std;

class CompNum{
    int a,b;
public:
    CompNum(int x,int y)
    {
        a = x;
        b = y;
    }

    friend void add_subs(CompNum A1, CompNum B2);
};

void add_subs(CompNum A1, CompNum B2){
        cout << "sum :"<< A1.a + B2.a << " " << A1.b + B2.b<< "i" << endl;
        cout << "Difference :"<< A1.a - B2.a << " " << A1.b - B2.b << "i"<<endl;
    }


int main()
{
    int a1, b1, a2, b2;
    cout<<"Enter a1 & b1: ";
    cin >> a1 >> b1;
    cout<<"Enter a2 & b2: ";
    cin >> a2 >> b2;

    if (IN_RANGE(a1) && IN_RANGE(b1) && IN_RANGE(a2) && IN_RANGE(b2)){

    CompNum A(a1,b1),B(a2,b2); add_subs(A,B);
    }
    else{cout<<"Wrong Input";}


}
