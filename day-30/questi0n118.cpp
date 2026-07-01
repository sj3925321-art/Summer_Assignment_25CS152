#include <bits/stdc++.h>
using namespace std;

struct library
{
    char BookName[30];
    char Author[30];
    float Price;
    int Quantity;
};

int main()
{
    struct library l1, l2, l3;

    strcpy(l1.BookName, "C Programming");
    strcpy(l1.Author, "Dennis Ritchie");
    l1.Price = 420;
    l1.Quantity = 96;

    strcpy(l2.BookName, "Data Structures");
    strcpy(l2.Author, "Narasimha");
    l2.Price = 538;
    l2.Quantity = 98;

    strcpy(l3.BookName, "Let Us C");
    strcpy(l3.Author, "Kanetkar");
    l3.Price = 930;
    l3.Quantity = 92;

    cout << "Book Name Author Price Quantity\n";

    cout << l1.BookName << " " << l1.Author << " " << l1.Price << " " << l1.Quantity << endl;

    cout << l2.BookName << " " << l2.Author << " " << l2.Price << " " << l2.Quantity << endl;

    cout << l3.BookName << " " << l3.Author << " " << l3.Price << " " << l3.Quantity << endl;

    return 0;
}