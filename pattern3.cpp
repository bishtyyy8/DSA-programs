// Write a Program to print inverted half pyramid star pattern.//

#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number of lines";
cin>>n;

cout<<" inverted right angled triangle pattern\n";

for(int i=1;i<=n;i++){

    for(int j=i;j<=n;j++){
        cout<<"*";
    }
    cout<<"\n";
    }
    return 0;
}