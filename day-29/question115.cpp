#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100], str2[100];
    int choice;

    cout << "Enter First String: ";
    cin >> str1;

    cout << "Enter Second String: ";
    cin >> str2;

    cout << "\n1. String Length";
    cout << "\n2. String Copy";
    cout << "\n3. String Compare";
    cout << "\n4. String Concatenate";
    cout << "\n5. Reverse String";
    cout << "\n6. Exit";

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Length of First String = " << strlen(str1);
            break;

        case 2:
            strcpy(str2, str1);
            cout << "Copied String = " << str2;
            break;

        case 3:
            if(strcmp(str1, str2) == 0)
                cout << "Strings are Equal";
            else
                cout << "Strings are Not Equal";
            break;

        case 4:
            strcat(str1, str2);
            cout << "Concatenated String = " << str1;
            break;

        case 5:
            strrev(str1);
            cout << "Reversed String = " << str1;
            break;

        case 6:
            cout << "Thank You";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}