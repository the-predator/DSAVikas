#include<bits/stdc++.h>
using namespace std;
long int factorial(int a)
     {
       long int fact=1;
      while(a>=1)
         {
            fact *=a;
            a--;
         }
      return fact;
     }
int main()
  {
    int n,r;
    cin>>n>>r;
    long int a;
    a = factorial(n)/(factorial(r)*factorial(n-r)); 
    cout<<a;
  }