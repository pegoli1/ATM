#include <iostream>
#include <iomanip>
#include "Account.h"
using namespace std;

// make a display menu function

void displayMenu()
{
    cout<<"\n\n            MENU\n\n";
    cout<<"1) Display the account  balance " << endl;
    cout<<"2) Display the number of transactions" << endl ;
    cout<<"3) Display the inetrest earned for this period " << endl;
    cout<<"4) make a disposit" << endl;
    cout<<"5) make a withdrawal" << endl;
    cout<<"6) add interest for this period " << endl;
    cout<<"7) Exit\n\n";
    cout<<"Enter your choice "
}

// make a method to get choice validate choice  and return  choice  to main method 

char getChoice (char max)
{
    char choice = cin.get();
    cin.ignore(); //bypass the enter '\n' in the input buffer 

    while (choice < '1' || choice > max )
    {
        cout << "choice must between 1 and " << max << ". "
             <<"please re-enter  choice:  ";
        choice  =  cin.get();
        cin.ignore();

    }
    
    return choice;
}


// now make a method for deposit which has an object parametr

void makeDeposit(Account &account)
{
    double dollars;
    cout << "Enter the ammount of deposit:  ";
    cin >> dollars ;
    cin.ignore();
    account.makeDeposit(dollars);

}

// make a methode for withdrawal

void withdraw(Account &account)
{
    double dollars ;
    cout  << "Enter the amount of withdrawal:"
    cin >> dollars ;
    cin.ignore();

    if (!account.withdraw(dollars)) //if amount is invalid  
    {
        cout << "ERROR: withdraw amount is too large.\n\n" << 
    }
    
}


int main()
{
    const char MAX_CHOICE = '7';

    Account savings;

    char choice ;

    cout << fixed << showpoint << setprecision(2);

    do {
        displayMenu();
        choice = getChoice(MAX_CHOICE);

        switch (choice)
        {
        case '1':
            cout << "the current balance is $"
            cout << savings.getBalance() << endl;
            break;
        case '2':
            cout << "there have been";
            cout << savings.getTransections()<< "transections. \n";
            break;
        case '3':
            cout << "Intrest  earned for this period:  $ " ;
            cout << savings.getInterest () << endl;
            break;
        case '4':
            makeDeposit(savings);
            break;
        case '5':
            withdraw(savings);
        case '6':
            savings.calculateInterest();
            cout<< "Interest added.\n"
        }
    } 
    
    
    while (choice != '7');
    
    return 0;
    
}