#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n,t;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for (int j = n-i,t=1; j >1; j--)
            {
                cout<<t;
                t++;
            }
           cout<<endl; 
        }
        
    }