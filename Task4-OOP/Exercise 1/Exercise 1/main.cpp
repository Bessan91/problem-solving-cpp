#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int id;
    string name;
    double balance;

public:

    Account(){};
    Account(int i, string n, double b)
    {
        id = i;
        name = n;
        balance = b;
    }
    Account(const Account &account)
    {
        id = account.id;
        name = account.name;
        balance = account.balance;
    }


    void setId(int i)
    {
        id = i;
    }

    void setName(string n)
    {
        name = n;
    }

    void setBalance(double b)
    {
        balance = b;
    }

    int getId() const
    {
        return id;
    }

    string getName() const
    {
        return name;
    }

    double getBalance() const
    {
        return balance;
    }

    void setData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void printInfo() const
    {
        cout << "\nAccount Information\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // TransferTo()
    void TransferTo(Account &receiver, double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount!" << endl;
            return;
        }

        if (balance >= amount)
        {
            balance -= amount;
            receiver.balance += amount;
        }
        else
        {
            cout << "ERROR !! Insufficient balance!" << endl;
        }
    }
};

int main()
{
    Account acc1(101, "Bessan", 5000);


    Account acc2;
    acc2.setData();

    cout << "\nBefore Transfer:\n";
    acc1.printInfo();
    acc2.printInfo();
    acc1.TransferTo(acc2, 1500);

    cout << "\nAfter Transfer:\n";
    acc1.printInfo();
    acc2.printInfo();
    Account acc3(acc1);

    acc3.printInfo();

    return 0;
}
