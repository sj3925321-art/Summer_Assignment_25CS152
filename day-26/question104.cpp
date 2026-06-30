#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    int score = 0;

    cout << "************QUIZ APPLICATION****************" << "\n";
    cout << "Question 1: Capital of India?\n";
    cout << "1. Mumbai\n";
    cout << "2. Kolkata\n";
    cout << "3. Delhi\n";
    cout << "4. Bihar\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "Question 2: 5 + 3 = ?\n";
    cout << "1. 6\n";
    cout << "2. 7\n";
    cout << "3. 8\n";
    cout << "4. 9\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "Question 3: C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n";
    cout << "2. Bjarne Stroustrup\n";
    cout << "3. James Gosling\n";
    cout << "4. Guido van Rossum\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong!\n";
    }

    cout << "Your score is: " << score << "\n";
    return 0;
}