#include<bits/stdc++.h>
using namespace std;
int main() {
    int days;
    cin>>days;
    switch(days) {
        case 1:
        cout<<"monday";
        break;
case 2:
cout<<"tuesday";
break;
case 3:
cout<<"sunday";
break;
case 4:
cout<<"wednesday";
break;
case 5:
cout<<"thrusday";
break;
case 6:
cout<<"friday";
break;
case 7:
cout<<"saturday";
break;
default:
cout<<"invalid";
break;
}
return 0;
}