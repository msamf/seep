#include "BankAccount.hpp"

using namespace std; 

// initialize
BankAccount::BankAccount(string bankAccount, double bankBalance) :
accountNumber(bankAccount), balance(bankBalance) {

}

// get
string BankAccount::getAccountNumber() {
  return accountNumber;
}

double BankAccount::getBalance() {
  return balance;
}

// set
void BankAccount::setAccountNumber(string newNumber) {
  accountNumber = newNumber;
}

void BankAccount::setBalance(double newBalance) {
  balance = newBalance;
}

// // Transaction class
void BankAccount::Transaction::deposit(BankAccount& account, double amount) {
  cout << "Depositing : $" << amount << " into account #" << account.accountNumber << endl;
  account.balance += amount;
  cout << "New balance: $" << account.balance << endl;
}

void BankAccount::Transaction::withdraw(BankAccount& account, double amount) {
  cout << "Withdrawing : $" << amount << " from account #" << account.accountNumber << endl;
  if (account.balance >= amount) {
    account.balance -= amount;
    cout << "New balance: $" << account.balance << endl;
  }
  else {
    cout << "Withdrawal unsuccessful; insufficient funds." << endl;
  }
}
