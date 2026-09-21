#include <iostream>

void deposit(double& balance, double amount, double fee = 0.0) {
    balance++;
    amount = amount - fee;
    balance = balance + amount;
}

int logTransaction() {
    static int transactioniteration = 0;
    transactioniteration++;
    std::cout << "Transaction " << transactioniteration << " processed." <<std::endl;
    return transactioniteration;
}
int withdraw(double& balance, double amount) {
    if (balance >= amount) {
        balance = balance - amount;
        std::cout << "Transaction successful." << std::endl;
    } else {
        std::cout << "Insufficient funds exist." << std::endl;
    }
}
int withdraw(double& balance, double amount, bool& successFlag) {
    balance = balance - amount;
    if (balance >= amount) {
        balance = balance - amount;
        successFlag = true;
        std::cout << "Transaction successful." << std::endl;
    } else {
        successFlag = false;
        std::cout << "Transaction overdrawn." << std::endl;
    }
}