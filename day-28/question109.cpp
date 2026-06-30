#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct library {
    char Book_Name[15];
    char Author[30];
    float Price;
    int Quantity;
    };
    struct library l1;
    strcpy(l1.Book_Name,"C programming");
    strcpy(l1.Author,"Dennis Ritchie");
    l1.Price=420.00;
    l1.Quantity=96; 
    struct library l2;
    strcpy(l2.Book_Name,"Data Structures");
    strcpy(l2.Author,"Narasimha Karumanchi");
    l2.Price=538.00;
    l2.Quantity=98; 
    struct library l3;
    strcpy(l3.Book_Name,"Let Us C ");
    strcpy(l3.Author,"Yashavant Kanetkar");
    l3.Price=930.00;
    l3.Quantity=92; 
    cout << "Book_Name"<<" "<<"Author"<<" "<<"Price"<<" "<<"Quantity"<<" "<<"\n";
    cout << l1.Book_Name<<" "<<l1.Author<<" "<<l1.Price<<" "<<l1.Quantity<<" "<<"\n";
    cout << l2.Book_Name<<" "<<l2.Author<<" "<<l2.Price<<" "<<l2.Quantity<<" "<<"\n";
    cout << l3.Book_Name<<" "<<l3.Author<<" "<<l3.Price<<" "<<l3.Quantity<<" "<<"\n";
    return 0;
}