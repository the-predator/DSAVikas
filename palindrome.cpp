#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = 1; j < n-i; j++)
       {
         cout<<" ";
       }
        for (int k = 0; k <= i; k++)
       {
        cout<<i-k+1;
       }
        for (int l = 0; l < i; l++)
       {
        cout<<l+2;
       }
       cout<<endl;
    }
    return 0;
   }