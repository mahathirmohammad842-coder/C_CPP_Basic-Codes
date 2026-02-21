#include<iostream>
using namespace std;


class BankAccount{
private:
    string accountHolderName; double accountNumber; double balance;

protected :
    string lastTransaction;


public:

BankAccount(string name,double  number,double balan=0.0){

    accountHolderName=name; accountNumber=number; balance=balan;
    }

    void getBalance() const {
        cout<<"Current balance :"<<balance<<endl;
    }

    void deposit(double amount){
        balance+=amount;
        lastTransaction="Deposited[amount]";
    }


    bool withdraw(double amount){
    if(amount<=balance){
        balance-=amount;
        lastTransaction="Withdraw[amount]";
        return true;
    }
    else{
        lastTransaction="Failed Withdrawal";
        return false;
    }
    }
friend void transferMoney(BankAccount &from,BankAccount &to,double amount);

};


 void transferMoney(BankAccount &from,BankAccount &to,double amount){
     from.balance -=amount;
     to.balance +=amount;
 }


int main(){
    BankAccount ac1("M",16,15000);
    BankAccount ac2("A",15,20000);

    ac1.getBalance();
    ac2.getBalance();
    transferMoney(ac1,ac2,3800);
    ac1.getBalance();
    ac2.getBalance();

return 0;
}
