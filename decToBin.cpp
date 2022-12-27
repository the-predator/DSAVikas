#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int bin=0, dec,i;
        cin>>dec;
        for (i = 0; dec > 0; i++)
        {
          int ld = dec%2;
          bin = bin + ld*pow(10,i);
          dec/=2;
        }
        cout<<bin<<endl;
        return 0;
    }