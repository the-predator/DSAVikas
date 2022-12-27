#include<bits/stdc++.h>
using namespace std;
void prime(int a, int b)
      {
        
        for (int i = a; i <= b; i++)
        {
            bool flag=0;
            for (int j = 2; j < i; j++)
            {
                if(i%j==0)
                  {
                flag = 1;
                break;
                  }
                else if(i%j!=0)
                    {
                        continue;
                    }
            }
            if(flag==0)
              {
                cout<<i<<" ";
              }
        }
        
      }
int main()
   {
    int a, b;
    cin>>a>>b;
    prime(a,b);
    return 0;
   }