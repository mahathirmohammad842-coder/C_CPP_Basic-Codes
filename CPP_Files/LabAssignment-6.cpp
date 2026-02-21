#include <iostream>
using namespace std;

namespace myns {
class Number {
private:
        int value;
public:
        Number(int v = 0)
        {
            value = v;
        }

        int getvalue() const
        {
            return value;
        }

        Number operator+(const Number& other) const
        {
            return Number(value + other.value);
        }
        Number operator*(const Number& other) const
        {
            return Number(value * other.value);
        }

        Number operator*(int n) const
        {
            return Number(value * n);
        }

friend Number operator*(int n, const Number& num);

};

  Number operator*(int n, const Number& num)
    {
        return Number(n * num.value);
    }
}

int main() {
    namespace mn = myns;

    mn::Number a(5);
    cout << "a.value() = " << a.getvalue() << endl;

    mn::Number b(3);
    mn::Number c = a + b;
    cout << "c = a + b = " << c.getvalue() << endl;

    mn::Number c1 = a * b;
    cout << "c1 = a * b = " << c1.getvalue() << endl;

    mn::Number c2 = a * 2;
    cout << "c2 = a * 2 = " << c2.getvalue() << endl;

    mn::Number c3 = 2 * a;
    cout << "c3 = 2 * a = " << c3.getvalue() << endl;

    mn::Number x(2), y(4);
    mn::Number result = x + y;

    cout << "x + y = " << result.getvalue() << endl;

return 0;
}
