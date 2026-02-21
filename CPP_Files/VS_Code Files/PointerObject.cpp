#include<iostream>
using namespace std;

class Cricketer{
public: 
    string name;
    int runs;

    Cricketer(string n , int r){
   name = n;
   runs = r;
    }


};

 void change(Cricketer *c){
        
        c->runs = 89; // (*c).runs = 80;
        
    }
    

int main(){

Cricketer c1("Mahathir", 25000);
// Cricketer c2("Maari", 5000);


cout<<c1.runs<<endl;
change(&c1);
cout<<c1.runs<<endl;

// Cricketer *p1 = &c1;

// cout<<(*p1).name <<endl;
// cout<<c1.runs<<endl;
// (*p1).runs = 77.5; 
// cout<<c1.runs<<endl;


// cout<<c2.name<<" " <<c2.runs<<endl;
    //a->b means (*a).b

 // int x =4;
 // cout<<&x<<endl;
 // int *p = &x;
 // cout<<p<<endl;
 // cout<<*p<<endl;
 // *p = 100; // x =100
 // cout<<x<<endl;

}