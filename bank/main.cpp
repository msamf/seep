#include <iostream>
#include "Bank.hpp"

using namespace std;

/* 
Simple program simulating a bank, which can accept and store accounts based on the account number and balance. Simple interactions (withdrawal, deposit, inter-account transfers can be performed). 
*/

int main() {

  // create a Bank
  Bank bigBank;
  // create some accounts
  bigBank.createAccount("1001", 5000);
  bigBank.createAccount("1002", 3000);
  bigBank.createAccount("1003", 2000);

  // Deposit $1000 into Account “1001.”
  BankAccount* acct = bigBank.findAccount("1001");
  BankAccount::Transaction t1;
  t1.deposit(*acct, 1000);

  // Withdraw $500 from Account “1002"
  BankAccount* acct2 = bigBank.findAccount("1002");
  BankAccount::Transaction t2;
  t2.withdraw(*acct2, 500);

  // Transfer $1000 from Account “1001” to Account “1002”
  int result = bigBank.transferMoney("1001", "1002", 1000);
  cout << result;

  if (result == 1) {
    cout << "Succesful transfer." << endl;
  }
  else if (result == 2) {
    cout << "One or both accounts could not be found." << endl;
  }
  else {
    cout << "Insufficient funds for transfer." << endl; 
  }
}
