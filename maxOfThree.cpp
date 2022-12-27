#include<bits/stdc++.h>
using namespace std;
int maxOfThree(int a, int b, int c)
    {
        if(a>b && a>c)
           {
            return a;
           }
        else if(b>a && b>c)
           {
            return b;
           }
        else{
            return c;
        }
    }
int main()
   {
     int a, b, c;
     cout<<"enter three numbers\n";
     cin>>a>>b>>c;
     cout<<"Max among the entered number is: "<<maxOfThree(a, b, c);
     return 0;
   }