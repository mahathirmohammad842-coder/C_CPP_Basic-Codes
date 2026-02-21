#include <iostream>

using namespace std;

class Number {
    int x, y;   // Data members in class

public:

    Number(int a, int b) {
        x = a;
        y = b;
    }

    ~Number() {
        cout << "Destructing" << endl;
    }


    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number obj1(5, 10);
    obj1.show();

    Number obj2(15, 20);
    obj2.show();


    return 0;
}
