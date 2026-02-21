#include <iostream>
using namespace std;
class ComplexNum{
    int x, y;
    public:
    //ComplexNum(){};
    ComplexNum(int a, int b){
        x = a;
        y = b;
    }
    void calc(ComplexNum o1, ComplexNum o2){
        cout << "sum :"<< o1.x + o2.x << " " << o1.y + o2.y<< "i" << endl;
        cout << "Difference :"<< o1.x - o2.x << " " << o1.y - o2.y << "i"<<endl;
    }
};

int main()
{
    int a1, b1, a2, b2;
    cout<<"Enter a1 & b1: ";
    cin >> a1 >> b1;
    cout<<"Enter a2 & b2: ";
    cin >> a2 >> b2;
    ComplexNum c3;
    if(a1>= -10000 && b1>= -10000 && a2>= -10000 && b2>= -10000
            && a1<=10000 && b1<=10000 && a2<=10000 && b2<=10000){
        ComplexNum c1(a1,b1), c2(a2,b2);
        c3.calc(c1,c2);
    }
    else cout<<"Invalid input";
    return 0;
}









