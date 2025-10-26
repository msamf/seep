#include "Bank.hpp"
#include <iostream>

void Bank::createAccount(string accountNumber, double balance) {
  BankAccount newAccount(accountNumber, balance);
  accounts.push_back(newAccount);
  cout << "Account created: #" << accountNumber << ", with balance $" << balance << endl;

}

BankAccount* Bank::findAccount(string number) {
  // loop through all accounts and see if there is one matching the given number: if yes return it, if not return nullptr
  for (int i = 0; i < accounts.size(); i++) {
    if (accounts[i].getAccountNumber() == number) {
      return &accounts[i];
    }
  }

  return nullptr;

}

int Bank::transferMoney(string sourceAccountNumber, string targetAccountNumber, double amount) {

  // check to see if both accounts exist
  BankAccount* sourceAccount = findAccount(sourceAccountNumber);
  BankAccount* targetAccount = findAccount(targetAccountNumber);
  if ((sourceAccount == nullptr) || (targetAccount == nullptr)) {
    return 2; 
  }

  // check to see if there are sufficient funds for withdrawal
  if (sourceAccount->getBalance() < amount) {
    return 3;
  }
  // if there are: perform the withdrawl from source and deposite
  // into target
  else {
    BankAccount::Transaction withdraw;
    withdraw.withdraw(*sourceAccount, amount);
    BankAccount::Transaction deposit;
    deposit.deposit(*targetAccount, amount);
    return 1; 
  }

}