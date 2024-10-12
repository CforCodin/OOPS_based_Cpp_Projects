#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
   string accountHolder;
   double balance;


public:
   BankAccount(string holder, double initialBalance = 0)
   {
       accountHolder = holder;
       balance = initialBalance;
   }
   
   void deposit(double amount)
   {
       if(amount > 0)
       {
           balance += amount;
           cout << "Credited " << amount << " New Balance: " << balance << endl;
       }
       else
       {
           cout << "Be positive" << endl;
       }
   }
   
   virtual void withdraw(double amount)
   {
       if(amount > 0 && amount <= balance)
       {
           balance -= amount;
           cout << "Debited: " << amount << " New Balance: " << balance << endl;
           
       }
       else
       cout << "Insufficient balance!" << endl;
   }
   
   
   double getBalance() const{
       return balance;
   }
   
   string getAccountHolder() const{
       return accountHolder;
   }
};


class SavingsAccount: public BankAccount
{
    private:
    double interestRate;
    
    public:
    
    SavingsAccount(string holder, double initialBalance, double rate) : BankAccount(holder, initialBalance), interestRate(rate)
    {}
    
    void applyInterest()
    {
        double interest = getBalance()*(interestRate/100);
        cout << "Interest of " << interestRate << "% applied." << endl;
        deposit(interest);
        cout << "New Balance : " << getBalance() << endl;
    }
};

class CurrentAccount : public BankAccount{
    
public:
CurrentAccount(string holder, double initialBalance): BankAccount(holder, initialBalance)
{}

void withdraw(double amount) override
{
    const double overdraftlimit = 500;
    if(amount > 0 && amount <= getBalance() + overdraftlimit)
    BankAccount::withdraw(amount);
    
    else
    cout << "Overdraft limit exceeded" << endl;
    
}
};



int main()
{
    
    SavingsAccount sc("Aarushi", 600, 6.3);
    sc.withdraw(200);
    sc.deposit(100);
    sc.applyInterest();
    
    CurrentAccount current("Bob", 500);
    current.deposit(300);
    current.withdraw(1000);
    
    
}
