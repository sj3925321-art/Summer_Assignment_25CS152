#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={1,2,3,4};
    int brr[]={3,4,5,6};
    cout<<"Intersection of array:";
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(arr[i]==brr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}