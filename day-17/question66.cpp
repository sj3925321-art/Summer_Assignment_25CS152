#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, found;
    int arr[] = {1, 2, 3, 4};
    int brr[] = {3, 4, 5, 6};
    int crr[8];

    for (int i = 0; i < 4; i++) {
        crr[n] = arr[i];
        n++;
    }

    for (int i = 0; i < 4; i++) {
        found = 0;
        for (int j = 0; j < n; j++) {
            if (brr[i] == crr[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            crr[n] = brr[i];
            n++;
        }
    }

    cout << "union array: ";
    for (int i = 0; i < n; i++) {
        cout << crr[i] << " ";
    }
    cout << endl;

    return 0;
}