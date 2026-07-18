#include <iostream>
using namespace std;

class BankAccount {
    private:
     double balance;
      
    public:
        BankAccount(double initialBalance) : balance(initialBalance) {}

        double getBalance() const {
            return balance;
        }

        void deposit(double amount){
            if (amount > 0) {
                balance += amount;
            }
        }

        bool withdraw(double amount){
            if (amount <= balance) {
                balance -=  amount;
                return true;
            }
            return false;
        }
};

int main() {
    // Create a bank account with an initial balance of 1000
    BankAccount account(1000.0);

    cout << "Initial balance: " << account.getBalance() << endl;

    account.deposit(500.0);
    cout << "Balance after deposit of 500: " << account.getBalance() << endl;

    bool success = account.withdraw(200.0);
    cout << "Withdraw 200: " << (success ? "success" : "failed") << endl;
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    success = account.withdraw(5000.0);
    cout << "Withdraw 5000: " << (success ? "success" : "failed") << endl;
    cout << "Final balance: " << account.getBalance() << endl;
    

    return 0;
}