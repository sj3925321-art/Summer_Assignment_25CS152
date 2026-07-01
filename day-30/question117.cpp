#include <bits/stdc++.h>
using namespace std;

int main()
{
    char Name[3][30] = {"Satyam", "Prince", "Rohan"};
    int Roll[3] = {40, 41, 42};
    int Age[3] = {19, 19, 20};
    float Marks[3] = {458, 490, 413};

    cout << "Name Roll Age Marks\n";

    for(int i = 0; i < 3; i++)
    {
        cout << Name[i] << " "
             << Roll[i] << " "
             << Age[i] << " "
             << Marks[i] << endl;
    }

    return 0;
}