#include<bits/stdc++.h>
using namespace std;
int main()
   {
   string n;
   cin>>n;
   int dec = 0, s = n.size();
   for (int i = s-1, j=0; i >= 0; i--,j++)
   {
    if(n[i]>='0' && n[i]<='9')
       {
         dec += ((int(n[i])-48)*pow(16,j));
       }
    else if(n[i]>='A' && n[i]<='F')
           {
            dec += ((int(n[i])-55)*pow(16,j));
           }  
       else{
    cout<<"entered numeber is not hexadecimal";
           }
   }
   cout<<dec;
   return 0;
   }