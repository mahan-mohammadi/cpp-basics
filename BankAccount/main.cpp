#include <iostream>
#include <string>
using namespace std;

class Account {
    public:
    int password;
    Account(int initalBalance) {
        if (initalBalance <= 0) {
            initalBalance = 0;
        }
        else {
            balance = initalBalance;
        }
    }
    int getBalance() {
        return balance;
    }
    void add(int quantity) {
        if (quantity <= 0) {
            cout << "Invalid Input" << endl;
        }
        else {
            balance += quantity;
        }

    }
    void remove(int depositAmount) {
        if (depositAmount <= 0 || depositAmount >= balance) {

            cout << "invalid action" << endl;
        }
        else {
            balance -= depositAmount;
        }
    }
    private:
        int balance;
};
int main() {

    Account acc1(1000);

    cout << acc1.getBalance() << endl;
    acc1.add(100);
    cout << acc1.getBalance() << endl;
    acc1.remove(100);
    cout << acc1.getBalance() << endl;

}