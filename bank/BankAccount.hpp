#include <string>
#include <iostream>

using namespace std;

class BankAccount {
  private:
    string accountNumber; 
    double balance;

  public:
    BankAccount(string bankAccount, double bankBalance);
    string getAccountNumber(); 
    double getBalance();
    void setAccountNumber(string newNumber);
    void setBalance(double newBalance);

    class Transaction {
      public:
        void deposit(BankAccount& account, double amount);
        void withdraw(BankAccount& account, double amount);

    };

};