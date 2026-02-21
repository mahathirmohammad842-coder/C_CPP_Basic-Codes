#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;

    cout<<"Enter a1 and b1 : "<<endl;
    cin >> a1>> b1;

    cout<<"Enter a2 and b2 : "<<endl;
    cin >> a2>> b2;

    int add_real = a1 + a2;
    int add_img = b1 + b2;

    int subs_real = a1 - a2;
    int subs_img = b1 - b2;

    cout << "Sum: " << add_real << ""<<" " << add_img << "i" << endl;
    cout << "Difference: " << subs_real << " " << subs_img << "i" << endl;


return 0;
}
