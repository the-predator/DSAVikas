#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int n,dec=0,ld;
    cin>>n;
    for (int i = 0; n > 0; i++)
    {
        ld = n%10;
        dec += ld*pow(2,i);
        n/=10;
        if(ld>1)
          {
            cout<<"number is not a binary number";
            return 0;
          }
    }
    cout<<dec;
    return 0;
   }