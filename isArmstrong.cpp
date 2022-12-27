#include<bits/stdc++.h>
using namespace std;
int main()
     {
        int n, sq=0, ld=0;
        cin>>n;
       int a=n;
        while (a>0)
        {
       ld = a%10;
       sq += ld*ld*ld;
       a/=10;
        }
        if(sq==n)
          {
            cout<<"entered number is an armstrong";
          }
        else{
            cout<<"entered number is not an armstrong ";
        }
        return 0;
     }