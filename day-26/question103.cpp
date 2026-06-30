#include<bits/stdc++.h> 
using namespace std;
int main() {
    int choice;
    float balance=100000.00,amount;
    cout<<"=======ATM MENU======"<<"\n";
    cout<<"1.Check balance"<<"\n";
    cout<<"2.Withdraw money"<<"\n";
    cout<<"3.Deposite money"<<"\n";
    cout<<"4.Exit"<<"\n";
    cout<<"Enter your choice:";
    cin>>choice;
        switch(choice) {
            case 1:
            cout<<"Current balane:"<<balance;
            break;
            case 2:
            cout<<"Enter your withdraw amount:";
            cin>>amount;
            if(amount>balance) {
            cout<<"Insufficent balance"<<"\n";
            break;
            }
            else if(amount<=0) {
            cout<<"Invalid amount";
            break;
            }
            else {
                balance=balance-amount;
                cout<<"Do not remove debit your card"<<"\n";
                cout<<"Collect your cash"<<"\n";
                cout<<"Current amount:"<<balance;
                break;
            }
            case 3:
            cout<<"Enter the deposite amount:"<<"\n";
            cin>>amount;
            if(amount>0) {
                balance=balance+amount;
                cout<<"current balance:"<<balance;
            }
            else {
                cout<<"Invalid amount";
            }
            break;
            case 4:
            cout<<"Thank you for using ATM"<<"\n";
            break;
            default:
            cout<<"Invalid choice";
        }
    return 0;
}