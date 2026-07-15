#include <iostream>
#include <thread>
#include <mutex>

class BankAccount
{
    public:
        BankAccount(double initial) : balance(initial) {}

        void deposit(double amount)
        {
            std::lock_guard<std::mutex> lockAccess(bankMutex);
            balance += amount;
        }

        bool withdraw(double amount)
        {
            std::lock_guard<std::mutex> lockAccess(bankMutex);
            if (balance < amount) return false;
            balance -= amount;
            return true;
        }

        double getBalance()
        {
            std::lock_guard<std::mutex> lockAccess(bankMutex);
            return balance;
        }

    private:
        double balance;
        std::mutex bankMutex;
        
};

int main()
{

    BankAccount account(500.0);
    
    std::thread t1([&]() {account.deposit(100); });
    std::thread t2([&]() {account.withdraw(100);});
    std::thread t3([&]() { account.deposit(100); });
    std::thread t4([&]() { account.deposit(100); });
    std::thread t5([&]() { account.withdraw(200); });
    std::thread t6([&]() { account.withdraw(200); });

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();

    std::cout << "Final Blanace: $" << account.getBalance() << std::endl;
    return 0;
}