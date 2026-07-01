#include <bits/stdc++.h>
using namespace std;

struct inventory
{
    int ProductId;
    char ProductName[30];
    int Quantity;
    float Price;
};

int main()
{
    struct inventory p1, p2, p3;

    p1.ProductId = 101;
    strcpy(p1.ProductName, "Laptop");
    p1.Quantity = 10;
    p1.Price = 55000;

    p2.ProductId = 102;
    strcpy(p2.ProductName, "Mouse");
    p2.Quantity = 25;
    p2.Price = 500;

    p3.ProductId = 103;
    strcpy(p3.ProductName, "Keyboard");
    p3.Quantity = 15;
    p3.Price = 1200;

    cout << "Product ID\tProduct Name\tQuantity\tPrice\n";

    cout << p1.ProductId << "\t\t" << p1.ProductName << "\t\t"
         << p1.Quantity << "\t\t" << p1.Price << endl;

    cout << p2.ProductId << "\t\t" << p2.ProductName << "\t\t"
         << p2.Quantity << "\t\t" << p2.Price << endl;

    cout << p3.ProductId << "\t\t" << p3.ProductName << "\t"
         << p3.Quantity << "\t\t" << p3.Price << endl;

    return 0;
}