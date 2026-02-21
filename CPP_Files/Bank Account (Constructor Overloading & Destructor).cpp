#include<iostream>

using namespace std;

class BankAccount{
    string account_holder;
    double balance;


public:

BankAccount()
    {
        account_holder = "Unknown";
        balance = 0.0;
    }
    BankAccount(string name, double initial_balance)
    {
         account_holder= name;
         balance = initial_balance;
    }

    ~BankAccount()
    {
        cout<<"Account of "<<account_holder<<" " <<"is closed"<<endl;
    }


    void deposit(double amount)
    {
        balance+=amount;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance -=amount;
        }

        else
        {
            cout<<"Insufficient balance for "<<account_holder<<endl;
        }
    }

    void transfer(double amount, BankAccount &receiver)
    {
        if( amount <= balance)
        {
            balance-= amount;
            receiver.balance += amount;
            cout<<"Transferred Balance to " << account_holder<<" " << "balance : "<<amount<<endl;
        }

        else
        {
            cout<<"Transfer failed due to insufficient balance for "<<account_holder<<endl;
        }
    }


    void display_balance()
    {
        cout<<"Account Holder : "<<account_holder<<"  "<<"Balance is :"<<balance<<endl;
    }


};



int main()
{
    BankAccount o1, o2("Mahathir" ,600.0);



o1.deposit(200);
o2.deposit(250);

o1.withdraw(100);
o2.withdraw(300);

o2.transfer(200,o1);

o1.display_balance();
o2.display_balance();

return 0;
};
