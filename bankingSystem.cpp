#include <iostream>
#include <math.h>
using namespace std;

class Bank{
    double balance, rate, depositAmount, withdrawalAmount;
    public:
        Bank(int b, int r){
            balance = b;
            rate = r;
        }
        void deposit(){
            cout<<"Enter deposite amount: ";
            cin>>depositAmount;
            balance += depositAmount;
            cout<<"Amount "<<depositAmount<<" is deposited"<<endl;
        }
        void withdraw(){
            cout<<"Enter withdrawal amount: ";
            cin>>withdrawalAmount;
            balance -= withdrawalAmount;
            cout<<"Amount "<<withdrawalAmount<<" is withdraw"<<endl;
        }
        double compound_intrest(){
            int years;
            cout<<"Enter year: ";
            cin>>years;
            return balance * pow((1 + rate/100), years) - balance;
        }
        void display(){
            cout<<"Balance: "<<balance<<endl;
        }
        void menu(){
            cout<< "\n--- Banking System Menu ---" << endl
                <<"1 for deposite."<<endl
                <<"2 for withdraw."<<endl
                <<"3 for compund interest."<<endl
                <<"4 to display balance."<<endl;
        }
};
int main(){
    int choice;
    Bank b(20515, 5);
    b.menu();

    while (choice != 0) {
        cout<<">> ";
        cin>>choice;
        switch(choice){
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                cout<<"commpound interest is: "<<b.compound_intrest()<<endl;
                break;
            case 4:
                b.display();
                break;
            case 0:
                cout<<"Exiting...";
                break;
        }
    }
    
    return 0;
}