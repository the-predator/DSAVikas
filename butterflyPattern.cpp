#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    { 
        cout<<"*";
    }
    for (int k = 1; k <=2*n-2*i; k++)
    {
        cout<<" ";
    }
    for (int l = 1; l <= i; l++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
  for (int i = 0; i < n; i++)
  {
     for (int j = 1; j <= n-i; j++)
    { 
        cout<<"*";
    }
    for (int k = 1; k <=2*i; k++)
    {
        cout<<" ";
    }
    for (int l = 0; l < n-i; l++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}