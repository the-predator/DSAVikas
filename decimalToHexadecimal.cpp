#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int dec,i;
        string hex;
        cin>>dec;
        for (i = 0; dec > 0; i++)
        {
           int ld = dec%16;
           if(ld>=0 && ld<10)
             {
                 hex[i]=char(ld+48);
             }
            else if(ld>=10 && ld<16)
             {
                 hex[i]=char(ld+55);
             }
            dec/=16;
        }
       for(i = i-1; i>=0; i--)
         {
             cout<<hex[i];
         }
        return 0;
    }