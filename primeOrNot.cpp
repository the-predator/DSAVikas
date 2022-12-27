#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,a=0;
        cin>>n;
        for (int i = 2; i < n-1; i++)
        {
            if(n%i==0)
               {
                a=1;
               }
            
        }
            if(a==0)
            {
                cout<<"the entered number is a prime number";
            }
            else{
                cout<<"the entered number is not a prime number";
            }
        return 0;
    }