#include <iostream>
using namespace std;

class BankAccount {
    string account_holder;
    double balance;

public:
    BankAccount(string name, double initial_balance) {
        account_holder = name;
        balance = initial_balance;
    }
void deposit(double amount){
   if(amount>0)
{
 balance+=amount;
 cout<<"Deposit :"<<amount<< " "<<"Balance :"<<balance<<endl;
}
else
{
 cout<<"Invalid"<<endl;
}

};



void withdraw(double amount)
{
if(amount>0 && amount<=balance)
{
  balance-=amount;
  cout<<"withdraw : " <<amount<< " " <<"Balance :"<<balance<<endl;
}
else{
     cout<<"Invalid"<<endl;

}
};


void show()
{
cout<<"Account Holder :"<<account_holder<<endl;
cout<<"Balance :"<<balance<<endl;


}
};


int main(){

BankAccount account1("Mahat",0);
BankAccount account2("Mahathir",0);


account1.deposit(400);
account1.withdraw(200);
account2.deposit(500);
account2.withdraw(300);
account1.show();
account2.show();



return 0;
}


