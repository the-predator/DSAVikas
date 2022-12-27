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
int nCr(int n, int r)
  {
    long int a;
    a = factorial(n)/(factorial(r)*factorial(n-r));
    return a;
  }
int main()
   {
    int n;
    cin>>n;
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j <= i; j++)
    {
        cout<<nCr(i,j);
    }
    cout<<endl;
   }
   return 0;
   }