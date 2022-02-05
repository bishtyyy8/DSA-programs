// Write a Program to print inverted half pyramid star pattern.//

#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the number of lines";
cin>>n;

cout<<" inverted right angled triangle pattern\n";

for(int i=0;i<n;i++){

    for(int j=0;j<n-1;j++){
        cout<<" ";
    }
    for(int k=i;i<n;k++){
        
    cout<<"*";

    }
    }
    return 0;
}