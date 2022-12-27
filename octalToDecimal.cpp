#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int n,dec=0,ld;
    cin>>n;
    for (int i = 0; n > 0; i++)
    {
        ld = n%10;
        dec += ld*pow(8,i);
        n/=10;
        if(ld>=8)
     {
        cout<<"number is not an octal number";
        return 0;
     }
    }
    cout<<dec;
    return 0;
   }