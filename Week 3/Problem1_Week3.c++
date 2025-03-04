#include<iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string accHoldName, double bal){
        accountNumber=accNum;
        accountHolderName=accHoldName;
        balance=bal;
    }

    void deposit(double amt){
        balance+=amt;
    }

    void withdraw(double amt){
        if(balance-amt<0){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amt;
        }
    }

    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount account(123456, "Raju Saxena", 1000);

    account.deposit(500);
    account.display();
    cout<<endl;
    
    account.withdraw(2000);
    account.display();
    cout<<endl;
    
    account.withdraw(500);
    account.display();
    cout<<endl;
    return 0;
}
