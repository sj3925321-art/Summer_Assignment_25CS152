#include<bits/stdc++.h>
using namespace std;
int main() {
    int choice,a,b;
cout << "1. Addition\n";
cout << "2. Subtraction\n";
cout << "3. Multiplication\n";
cout << "4. Division\n";
cout << "5. Exit\n";

cout << "Enter Choice: ";
cin >> choice;

cout << "Enter two numbers: ";
cin >> a >> b;

switch(choice)
{
    case 1:
        cout << "Addition = " << a + b;
        break;

    case 2:
        cout << "Subtraction = " << a - b;
        break;

    case 3:
        cout << "Multiplication = " << a * b;
        break;

    case 4:
        cout << "Division = " << (float)a / b;
        break;

    case 5:
        cout << "Thank You";
        break;

    default:
        cout << "Invalid Choice";
}
return 0;
}