#include<bits/stdc++.h>
using namespace std;
int factorial(int a)
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
    int a;
    cin>>a;
    long int b;
    b = factorial(a);
    cout<<b;
    return 0;
  }