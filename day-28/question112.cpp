#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct Contact {
    char Name[15];
    long long Mobile_No;
    char Email[40];
    char Address[25];
    };
    struct Contact C1;
    strcpy(C1.Name,"Satyam");
    C1.Mobile_No=7243564309;
    strcpy(C1.Email,"satyamjha6534@gmail.com");
    strcpy(C1.Address,"Madhubani Bihar");
    struct Contact C2;
    strcpy(C2.Name,"Prince");
    C2.Mobile_No=8714866503;
    strcpy(C2.Email,"pricejha604@gmail.com");
    strcpy(C2.Address,"Madhubani Bihar");
    struct Contact C3;
    strcpy(C3.Name,"Rohan");
    C3.Mobile_No=9234839803;
    strcpy(C3.Email,"Rohan6984@gmail.com");
    strcpy(C3.Address,"Samastipur Bihar");
    cout << "Name"<<" "<<"Mobile_No"<<" "<<"Email"<<" "<<"Address"<<" "<<"\n";
    cout << C1.Name << " " << C1.Mobile_No << " " << C1.Email << " "<< C1.Address<<"\n" ;
    cout << C2.Name << " " << C2.Mobile_No << " " << C2.Email << " "<< C2.Address<<"\n" ;
    cout << C3.Name << " " << C3.Mobile_No << " " << C3.Email << " " << C3.Address<<"\n" ;
    return 0;
}