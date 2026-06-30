#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct employee {
    char Name[15];
    int EmpId;
    int Age;
    float salary;
    };
    struct employee e1;
    strcpy(e1.Name,"Satyam");
    e1.EmpId=40;
    e1.Age=19;
    e1.salary=120000.000;
    struct employee e2;
    strcpy(e2.Name,"Prince");
    e2.EmpId=41;
    e2.Age=19;
    e2.salary=240000;
    struct employee e3;
    strcpy(e3.Name,"Rohan");
    e3.EmpId=42;
    e3.Age=23;
    e3.salary=70000;
    cout << "Name"<<" "<<"EmpId"<<" "<<"Age"<<" "<<"salary"<<"\n";
    cout << e1.Name << " " << e1.EmpId << " " << e1.Age << " " << e1.salary
     <<"\n" ;
    cout << e2.Name << " " << e2.EmpId << " " << e2.Age << " " << e2.salary
     <<"\n" ;
    cout << e3.Name << " " << e3.EmpId << " " << e3.Age << " " << e3.salary
     <<"\n" ;
    return 0;
}