#include <iostream>
using namespace std;

class Number2;  // Forward declaration

class Number {
    int x, y;

public:
    void set(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Friend function declaration
    friend Number add(Number n1, Number2 n2);
};

class Number2 {
    int x, y;

public:
    void set(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Friend function declaration
    friend Number add(Number n1, Number2 n2);
};

// Friend function definition
Number add(Number n1, Number2 n2) {
    Number obj;
    obj.x = n1.x + n2.x;
    obj.y = n1.y + n2.y;
    return obj;
}

int main() {
    Number num1, result;
    Number2 num2;

    num1.set(10, 20);
    num2.set(30, 40);

    cout << "First Object (Number class): ";
    num1.show();

    cout << "Second Object (Number2 class): ";
    num2.show();

    result = add(num1, num2);

    cout << "Result Object after addition: ";
    result.show();

    return 0;
}

