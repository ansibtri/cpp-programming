#include<iostream>
#include<cstring>
using namespace std;
class Account{
   private:
    char name[50]; // name of depositor
    long accountNumber; // account number of the depositor
    char accountType[100]; // account type chosen by depositor
    float balance; // balance amount deposited by depositor

    public: 
    void set(char *name, long accountNumber, char *accountType,float balance){
        strcpy(this->name,name);
        this->accountNumber = accountNumber;
        strcpy(this->accountType, accountType);
        this->balance = balance;
    }
    void deposit(int newDeposit){
        this->balance = this->balance+newDeposit;
        cout<<"Dear Customer, Your account #"<<accountNumber<<" has been credited by NPR"<<newDeposit<<". Your new balance is NPR"<<this->balance<<endl;

    }
    void withdraw(float withDrawAmount){
         if (this->balance > withDrawAmount)
        {
            this->balance -= withDrawAmount;
            cout << "Dear Customer, Your Account has been debited by NPR " << withDrawAmount << endl;
        }
        else
        {
            cout << "Dear Customer, Your Account has not sufficient amount." <<endl;
        }
    }
    void accinfo(){
        cout<<"Customer Info: "<<endl;
        cout<<"Account Name: "<<this->name<<endl;
        cout<<"Current Balance: NPR"<<this->balance<<endl;
    }
};

int main(){
    char name[50]; // name of depositor
    long accountNumber; // account number of the depositor
    char accountType[100]; // account type chosen by depositor
    float balance; 
    cout<<"Name: ";cin>>name;
    cout<<"Account Number: ";cin>>accountNumber;
    cout<<"Account Type: ";cin>>accountType;
    cout<<"Balance: ";cin>>balance;
    Account hari;

    hari.set(name,accountNumber,accountType,balance);
    cout<<endl;
    hari.accinfo();
    cout<<endl;
    hari.deposit(100000);
    hari.accinfo();
    cout<<endl;
    hari.withdraw(50567.45);
    cout<<endl;
    hari.accinfo();
   return 0;
}