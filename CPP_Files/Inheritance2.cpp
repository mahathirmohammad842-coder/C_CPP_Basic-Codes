#include <iostream>
using namespace std;

class base {
    int x;
public:
    void setX(int n) { x = n; }
    void showX() { cout << "x = " << x << endl; }
};

class derived : public base {
    int y;
public:
    void setY(int n) { y = n; }
    void showY() { cout << "y = " << y << endl; }
};

int main() {
    derived obj;
    obj.setX(10);
    obj.setY(20);

    obj.showX();
    obj.showY();

    return 0;
}
