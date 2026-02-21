#include <iostream>
using namespace std;

class A {
    int x;    //private members could not be inherited

public:
    int y;

    void set(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

class B : public A {
    int w;

public:
    void setW(int a) {
        w = a;
    }

    void sshow() {
        cout << "w: " << w << ", y: " << y << endl;
    }
};

int main() {
    A objA;
    B objB;

    objA.set(1, 2);
    objB.set(3, 4);
    objB.setW(10);

    objA.show();
    objB.show();
    objB.sshow();

return 0;
}



