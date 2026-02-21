#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    protected:
    string name;
    float balance;


public :
    BankAccount(string n, float b)
    {
        name = n; balance = b;

    }

    friend void transfer(string n1, string n2, float b, BankAccount obj[]);

};

    void transfer(string n1,string n2, float b, BankAccount obj[]){
        int sender,receiver;
        for(int i=0; ;i++)
            {
                if(obj[i].name==n1)
                    {
                    sender=i;
                    break;
                    }
                }
                for(int i=0; ;i++)
                    {
                        if(obj[i].name==n2)
                            {
                            receiver=i;
                            break;
                            }
                        }


    obj[receiver].balance+=b;
    obj[sender].balance-=b;


        cout << obj[sender].name << " " << obj[sender].balance << endl;
        cout << obj[receiver].name << " " << obj[receiver].balance;

}




int main()
{

    BankAccount obj[2]{
    BankAccount("Mahathir",1000),
    BankAccount("Avoy",2500)};

    transfer("Mahathir","Avoy",255.5,obj);


return 0;
}
