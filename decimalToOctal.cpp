#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int oct=0, dec,i;
        cin>>dec;
        for (i = 0; dec > 0; i++)
        {
          int ld = dec%8;
          oct = oct + ld*pow(10,i);
          dec/=8;
        }
        cout<<oct<<endl;
        return 0;
    }