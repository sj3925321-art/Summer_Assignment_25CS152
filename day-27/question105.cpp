#include<bits/stdc++.h> 
using namespace std;
int main() {
    struct student {
    char Name[15];
    int Roll;
    int Age;
    float marks;
    };
    struct student s1;
    strcpy(s1.Name,"Satyam");
    s1.Roll=40;
    s1.Age=19;
    s1.marks=458;
    struct student s2;
    strcpy(s2.Name,"Prince");
    s2.Roll=41;
    s2.Age=19;
    s2.marks=490;
    struct student s3;
    strcpy(s3.Name,"Rohan");
    s3.Roll=42;
    s3.Age=19;
    s3.marks=413;
    cout << "Name\tRoll\tAge\tMarks\n";
    cout << s1.Name << "\t" << s1.Roll << "\t" << s1.Age << "\t" << s1.marks <<"\n" ;
    cout << s2.Name << "\t" << s2.Roll << "\t" << s2.Age << "\t" << s2.marks <<"\n" ;
    cout << s3.Name << "\t" << s3.Roll << "\t" << s3.Age << "\t" << s3.marks <<"\n" ;
    return 0;
}