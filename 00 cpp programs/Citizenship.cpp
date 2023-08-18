#include <iostream>
#include<string.h>
using namespace std;

class Person
{
    char name[50];
    int age;
    char address[50];
    long int citizenshipNo;

public:
    void set(char n[50], char add[50], int a, long int c = 0)
    {
        strcpy(name, n);
        strcpy(address, add);
        age = a;
        citizenshipNo = c;
    }
    void get()
    {
        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout << "Citzen Information: " << endl;
        cout << "Citizenship No: " << citizenshipNo;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
    }
};
int main()
{
    char name[50];
    char address[50];
    int age;
    long int citizenNo;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout << "Enter the citizenship information: " << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Address: ";
    cin >> address;
    cout << "Age: ";
    cin >> age;
    if (age > 16)
    {
        cout << "Citizenship No: ";
        cin >> citizenNo;
    }
    else
    {
        citizenNo = 0;
    }
    cout<<"--------------------------------------------------------------------------------"<<endl;
    Person P;
    P.set(name,address,age,citizenNo);
    P.get();
    return 0;
}