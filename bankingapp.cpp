#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {

        std::cout << "**************************" << std::endl;
        std::cout << "Enter your Choice:" << std::endl;
        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit(balance);
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thank for visiting us" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
        }

    } while (choice != 4);
}

void showBalance(double balance)
{
    std::cout << "Your current balance is Ksh." << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(double balance)
{
    int amount = 0;
    std::cout << "Enter amount to deposit"
              << "\n";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid amount Entered" << std::endl;
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: " << std::endl;
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient Funds" << std::endl;
        return 0;
    }
    else if (amount < 0)
    {
       std::cout << "Invalid withdrawal amount" << std::endl;  
       return 0;
    }
    else
    {
        return amount;
    }
}