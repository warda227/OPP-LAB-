#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    float balance;

public:
    // 1. Default Constructor
    Account() {
        accountNumber = 0;
        balance = 0.0;
    }

    // 2. Parameterized Constructor
    Account(int accNum, float bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // 3. Copy Constructor
    Account(const Account &obj) {
        accountNumber = obj.accountNumber;
        balance = obj.balance;
    }

    // Function to display account details
    void display() {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }
};

int main() {
    // Using Default Constructor
    Account act1;
    
    // Using Parameterized Constructor
    Account act2(12345, 1500.50);
    
    // Using Copy Constructor
    Account act3 = act2;

    cout << "Account 1 (Default): ";
    act1.display();
    
    cout << "Account 2 (Parameterized): ";
    act2.display();
    
    cout << "Account 3 (Copy of Account 2): ";
    act3.display();

    return 0;
}
