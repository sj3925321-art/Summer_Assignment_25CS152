#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n1. Display Array";
    cout << "\n2. Search Element";
    cout << "\n3. Largest Element";
    cout << "\n4. Smallest Element";
    cout << "\n5. Exit";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Array Elements: ";
            for(int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            break;

        case 2:
            cout << "Enter element to search: ";
            cin >> key;

            for(int i = 0; i < n; i++)
            {
                if(arr[i] == key)
                {
                    cout << "Element found at position " << i + 1;
                    return 0;
                }
            }

            cout << "Element not found";
            break;

        case 3:
        {
            int largest = arr[0];

            for(int i = 1; i < n; i++)
            {
                if(arr[i] > largest)
                    largest = arr[i];
            }

            cout << "Largest Element = " << largest;
            break;
        }

        case 4:
        {
            int smallest = arr[0];

            for(int i = 1; i < n; i++)
            {
                if(arr[i] < smallest)
                    smallest = arr[i];
            }

            cout << "Smallest Element = " << smallest;
            break;
        }

        case 5:
            cout << "Thank You";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}