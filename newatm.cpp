#include <iostream>
#include <fstream>
#include <string>

class BankAccount
{
public:
    BankAccount(std::string name, int accountNum, double balance)
        : ownerName(name), accountNumber(accountNum), currentBalance(balance) {}

    void deposit(double amount)
    {
        currentBalance += amount;
    }

    bool withdraw(double amount)
    {
        if (amount > currentBalance)
        {
            return false;
        }
        currentBalance -= amount;
        return true;
    }

    void display() const
    {
        std::cout << "Account owner: " << ownerName << std::endl;
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Current balance: $" << currentBalance << std::endl;
    }

    std::string ownerName;
    int accountNumber;
    double currentBalance;
};

int main()
{
    BankAccount accounts[10];
    int numAccounts = 0;

    std::ifstream inputFile("accounts.txt");
    if (inputFile.is_open())
    {
        std::string name;
        int accountNum;
        double balance;
        while (inputFile >> name >> accountNum >> balance)
        {
            accounts[numAccounts++] = BankAccount(name, accountNum, balance);
        }
        inputFile.close();
    }

    while (true)
    {
        int accountNum;
        std::cout << "Enter your account number: ";
        std::cin >> accountNum;

        int i;
        for (i = 0; i < numAccounts; i++)
        {
            if (accounts[i].accountNumber == accountNum)
            {
                break;
            }
        }
        if (i == numAccounts)
        {
            std::cout << "Invalid account number." << std::endl;
            continue;
        }

        while (true)
        {
            std::cout << "1. Display balance" << std::endl;
            std::cout << "2. Deposit" << std::endl;
            std::cout << "3. Withdraw" << std::endl;
            std::cout << "4. Quit" << std::endl;
            std::cout << "Enter your choice: ";
            int choice;
            std::cin >> choice;
            if (choice == 4)
            {
                break;
            }
            switch (choice)
            {
            case 1:
                accounts[i].display();
                break;
            case 2:
            {
                double amount;
                std::cout << "Enter the amount to deposit: ";
                std::cin >> amount;
                accounts[i].deposit(amount);
                break;
            }
            case 3:
            {
                double amount;
                std::cout << "Enter the amount to withdraw: ";
                std::cin >> amount;
                if (!accounts[i].withdraw(amount))
                {
                    std::cout << "Insufficient balance." << std::endl;
                }
                break;
            }
            default:
                std::cout << "Invalid choice." << std::endl;
                break;
            }
        }
    }

    std::ofstream outputFile("accounts.txt");
    if (outputFile.is_open())
    {
        for (int i = 0; i < numAccounts; i++)
        {
            outputFile << accounts[i].ownerName << ' ' << accounts[i].accountNumber << ' ' << accounts[i].currentBalance << std::endl;
        }
        outputFile.close();
    }

    return 0;
}


