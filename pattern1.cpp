// Write a Program to print the right triangle star pattern.

#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number of lines to print * =";
cin>>n;

cout<<"right angled triangle pattern\n";

for(int i=1;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<"\n";
    }
    return 0;
}
