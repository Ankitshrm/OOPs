#include <iostream>
using namespace std;
class Account
{
    int balance;
    public:
        Account(int bal)
        {
            if(balance >= 0)
            {
                balance = bal;
            }
            else
            {
                balance = 0;
                cout<<endl<<"Invalid initial balance ";
            }
        }
        void credit()
        {
            int amount;
            cout<<endl<<"Enter amount to be credit : ";
            cin>>amount;
            balance += amount;
        }
        void debit()
        {
            int amount;
            cout<<endl<<"Enter amount to be debit : ";
            cin>>amount;
            if(amount > balance)
            {
                cout<<endl<<"Debit amount exceeded account balance. ";
            }
            else
            {
                balance -= amount;
            }
        }
        int getBalance()
        {
            return balance;
        }
};

int main()
{
    int initial_bal;
    cout<<endl<<"Enter initial balance of Account 1 : ";
    cin>>initial_bal;

    Account a1(initial_bal);
    a1.credit();
    a1.debit();


    cout<<endl<<"Final balance in account : " << a1.getBalance();
    cout<<endl<<"Enter initial balance of Account 2 : ";
    cin>>initial_bal;

    Account a2(initial_bal);
    a2.credit();
    a2.debit();

    cout<<endl<<"Final balance in account : "<<a2.getBalance();

    return 0;
}
