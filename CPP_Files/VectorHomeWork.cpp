#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    v.push_back(20);
    v.push_back(11);
    v.push_back(6);
    v.push_back(30);

    cout << "Element at index 0 : " << v[0] << endl;
    cout << "Element at index 1 : " << v[1] << endl;
    cout << "Element at index 2 : " << v[2] << endl;
    cout << "Element at index 3 : " << v[3] << endl;

    v.insert(v.begin() + 2, 25);

    v.erase(v.begin() + 1);

    v.pop_back();

    cout << "After completion: "<<endl;
    for (int i = 0; i < v.size(); i++) {
    cout << "Element at index " << i << " : " << v[i] << endl;
}

    sort(v.begin(), v.end());

    cout << "After sort: ";                         // for(int x:v){
                                                                  // cout<<x<<" ";         }
    for (int i=0; i < v.size(); i++){
       cout <<v[i] << " ";;
    };

    cout<<endl;

    v.clear();
    cout << "After clear, size: " << v.size() << endl;

    return 0;
}
