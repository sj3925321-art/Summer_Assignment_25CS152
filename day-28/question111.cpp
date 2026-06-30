#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct ticket {
    char Name[15];
    int Ticket_No;
    char Source[20];
    char Destination[25];
    float Fare;
    };
    struct ticket t1;
    strcpy(t1.Name,"Satyam");
    t1.Ticket_No=4032;
    strcpy(t1.Source,"Darbhanga");
   strcpy(t1.Destination,"New Delhi");
    t1.Fare=1860.89;
    struct ticket t2;
    strcpy(t2.Name,"Prince");
    t2.Ticket_No=4034;
    strcpy(t2.Source,"sakri");
     strcpy(t2.Destination,"Anand Vihar Terminal");
    t2.Fare=2190.87;
    struct ticket t3;
    strcpy(t3.Name,"Rohan");
    t3.Ticket_No=4036;
    strcpy(t3.Source,"Samastipur");
    strcpy(t3.Destination,"Mumbai");
    t3.Fare=1654.78;
    cout << "Name"<<" "<<"Ticket_No"<<" "<<"Source"<<" "<<"Destination"<<" "<<"Fare"<<"\n";
    cout << t1.Name << " " << t1.Ticket_No << " " << t1.Source << " "<< t1.Destination<<" "<< t1.Fare
     <<"\n" ;
    cout << t2.Name << " " << t2.Ticket_No << " " << t2.Source << " "<< t2.Destination<<" " << t2.Fare
     <<"\n" ;
    cout << t3.Name << " " << t3.Ticket_No << " " << t3.Source << " " << t3.Destination<<" "<< t3.Fare
     <<"\n" ;
    return 0;
}