#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct bank {
    char Name[15];
    int Account_No;
    char Account_Type[20];
    float Balance;
    };
    struct bank e1;
    strcpy(e1.Name,"Satyam");
    e1.Account_No=205643156;
    strcpy(e1.Account_Type,"Saving Account");
    e1.Balance=120000.000;
    struct bank e2;
    strcpy(e2.Name,"Prince");
    e2.Account_No=201544554;
    strcpy(e2.Account_Type,"Current Account");
    e2.Balance=240000;
    struct bank e3;
    strcpy(e3.Name,"Rohan");
    e3.Account_No=201554568;
    strcpy(e3.Account_Type,"Salary Account");
    e3.Balance=70000;
    cout << "Name"<<" "<<"Account_No"<<" "<<"Account_Type"<<" "<<"Balance"<<"\n";
    cout << e1.Name << " " << e1.Account_No << " " << e1.Account_Type<< " " << e1.Balance
     <<"\n" ;
    cout << e2.Name << " " << e2.Account_No << " " << e2.Account_Type << " " << e2.Balance
     <<"\n" ;
    cout << e3.Name << " " << e3.Account_No << " " << e3.Account_Type<< " " << e3.Balance
     <<"\n" ;
    return 0;
}