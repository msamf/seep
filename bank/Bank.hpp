#include <vector>
#include "BankAccount.hpp"

class Bank {
  private:
    vector<BankAccount> accounts;

  public:
    void createAccount(string accountNumber, double balance);
    BankAccount* findAccount(string number);
    int transferMoney(string sourceAccountNumber, string targetAccountNumber, double amount);

};