#include <bits/stdc++.h>
using namespace std;

char Name[3][30] = {"Satyam", "Prince", "Rohan"};
int Roll[3] = {40, 41, 42};
int Age[3] = {19, 20, 21};
float Marks[3] = {458, 490, 413};

void display()
{
    cout << "Name Roll Age Marks\n";

    for(int i = 0; i < 3; i++)
    {
        cout << Name[i] << " "
             << Roll[i] << " "
             << Age[i] << " "
             << Marks[i] << endl;
    }
}

int main()
{
    display();
    return 0;
}