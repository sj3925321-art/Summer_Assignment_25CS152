#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct salary {
    char Name[15];
    int EmpId;
    float BasicSalary;
    float Bonus;
    float Totalsalary;
    };
    struct salary s1;
    strcpy(s1.Name,"Satyam");
    s1.EmpId=40;
    s1.BasicSalary=110000;
    s1.Bonus=10000;
    s1.Totalsalary=120000.000;
    struct salary s2;
    strcpy(s2.Name,"Prince");
    s2.EmpId=41;
    s2.BasicSalary=220000;
     s2.Bonus=20000;
    s2.Totalsalary=240000;
    struct salary s3;
    strcpy(s3.Name,"Rohan");
    s3.EmpId=42;
    s3.BasicSalary=65000;
     s3.Bonus=5000;
    s3.Totalsalary=70000;
    cout << "Name"<<" "<<"EmpId"<<" "<<"BasicSalary"<<" "<<"Bonus"<<" "<<"Totalsalary"<<"\n";
    cout << s1.Name << " " << s1.EmpId << " " << s1.BasicSalary << " "<< s1.Bonus<<" "<< s1.Totalsalary
     <<"\n" ;
    cout << s2.Name << " " << s2.EmpId << " " << s2.BasicSalary << " "<< s2.Bonus<<" " << s2.Totalsalary
     <<"\n" ;
    cout << s3.Name << " " << s3.EmpId << " " << s3.BasicSalary << " " << s3.Bonus<<" "<< s3.Totalsalary
     <<"\n" ;
    return 0;
}