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
    

int main(){

Cricketer c1("Mahathir", 25000);
Cricketer *c2= new Cricketer("Maari", 5000);

cout<<c1.name<<" " <<c1.runs<<endl;
cout<<c2->name<<" "<<c2->runs<<endl; //(*c2)

// int x = 6;
// cout<<x<<endl;
// int *ptr = &x;
// cout<<*ptr<<endl;

// int *ptr = new int(5245);
// cout<<*ptr<<endl;


}