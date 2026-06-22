#include<bits/stdc++.h>
using namespace std;
int main() {
    int sum=0,Result;
   int Total=36;
    int arr[8]={1,2,3,4,5,7,8};
    for(int i=0; i<8; i++) {
        sum=sum+arr[i];
    }
    Result=Total-sum;
    cout<<"Missing element is:"<<Result;
    return 0;
}