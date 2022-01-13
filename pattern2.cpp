// Write a Program to print mirrored right triangle star pattern.

#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n;
     
    cout << "Enter Mirrored Right Triangle Star Pattern rows= ";
    cin >> n;

    cout << "Mirrored Right Angled Triangle Pattern\n"; 

    for(i = 1; i <= n; i++)
    {
    	for(j = 0; j <=n - i; j++)
		{
            cout << " ";
        }
        for(k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }		
 	return 0;
}
