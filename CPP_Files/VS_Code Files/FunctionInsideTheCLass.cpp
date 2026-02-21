#include<iostream>
using namespace std;

class Cricketer{
public: 
    string name;
    int runs;

    Cricketer(string name , int runs){
    this->name = name;
    this->runs = runs;
     }
    //  void print(int a){
    //     cout<<this->name<<" "<<this->runs<<" "<<endl;
    //     cout<<a<<endl;
    //  }

    // void print(int runs){
    //     cout<<name<<" "<<runs<<" "<<endl;
    //     cout<<runs<<endl;
    //  }
     void print(int runs){
        cout<<name<<" "<<this->runs<<" "<<endl;
        cout<<runs<<endl;
     }


};


int main(){

Cricketer c1("Mahathir", 25000);
Cricketer c2("Maari", 5000);

c1.print(2);
c2.print(4);

// cout<<c1.name <<" " <<c1.runs<<endl;
// cout<<c2.name<<" " <<c2.runs<<endl;

}