#include<iostream>
using namespace std;

class Account
{
protected:
    double balance;

public:

    void set_balance(double b)
    {
        balance = b;
    }

    void deposit(int x )
    {
        balance+= x;
    }

    void withdraw(int y)
    {
        balance-= y;
    }

};

class SavingsAccount : public Account
{
private:
    float interestRate;

public:
    void set_interest(float rate )
    {
       interestRate =  rate;
    }

    float calc_interest()
    {
        return balance* (interestRate / 100);
    }

};


class PremiumSavings : public SavingsAccount
{
private:
   float bonusAmount;

public:
    float set_bonusAmount(float c)
    {
       bonusAmount = c ;
    }

    void display_totalSavings()
    {
       cout<< "Balance : "<<balance<<endl;
       cout<< "Interest : "<<calc_interest()<<endl;
       cout<< "Bonus: "<<bonusAmount<<endl;
       cout<< "Total Savings : "<<balance+calc_interest()+bonusAmount<<endl;
    }
};

int main()
{
    PremiumSavings P1;

    P1.set_balance(45000.55);
    P1.deposit(5000.50);
    P1.withdraw(12000.75);
    P1.set_interest(9);
    P1.set_bonusAmount(5000);

    P1.display_totalSavings();

}
