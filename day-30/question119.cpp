#include <bits/stdc++.h>
using namespace std;

struct employee
{
    char Name[30];
    int EmpId;
    int Age;
    float Salary;
};

int main()
{
    struct employee e1, e2, e3;

    strcpy(e1.Name, "Satyam");
    e1.EmpId = 101;
    e1.Age = 19;
    e1.Salary = 25000;

    strcpy(e2.Name, "Prince");
    e2.EmpId = 102;
    e2.Age = 20;
    e2.Salary = 30000;

    strcpy(e3.Name, "Rohan");
    e3.EmpId = 103;
    e3.Age = 21;
    e3.Salary = 28000;

    cout << "Name EmpId Age Salary\n";

    cout << e1.Name << " " << e1.EmpId << " " << e1.Age << " " << e1.Salary << endl;

    cout << e2.Name << " " << e2.EmpId << " " << e2.Age << " " << e2.Salary << endl;

    cout << e3.Name << " " << e3.EmpId << " " << e3.Age << " " << e3.Salary << endl;

    return 0;
}