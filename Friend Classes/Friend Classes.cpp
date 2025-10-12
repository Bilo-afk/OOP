#include <iostream>
using namespace std;

class BankAccount;

class ATM {
public:
    void withdraw(BankAccount& account, int amount);
};

class BankAccount {
private:
    int balance;

public:
    BankAccount(int bal) : balance(bal) {}

    friend class ATM; // Allow ATM to access balance
};

void ATM::withdraw(BankAccount& account, int amount) {
    if (amount <= account.balance) {
        account.balance -= amount;
        cout << "Withdrawal successful. Remaining balance: " << account.balance << endl;
    }
    else {
        cout << "Insufficient funds!" << endl;
    }
}

int main() {
    BankAccount acc(500);
    ATM atm;
    atm.withdraw(acc, 200);
    return 0;
}