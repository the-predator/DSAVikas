#include<bits/stdc++.h>
using namespace std;
int main()
       {
        int n;
        cin>>n;
        for (int i = 1; i <= n/3; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                if((i+j)%4==0)
                  {
                    cout<<"*";
                  }
                else if(j%4==0 && i==2)
                  {
                    cout<<"*";
                  }
                  else {
                    cout<<" ";
                  }
            }
            cout<<endl;
        }
        return 0;
       }