#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int row, col, val;
    cout<<"enter rows and columns";
    cin>>row>>col;
    val = 1;
    for (int i = 1; i <= row; i++)
    {
       for (int j = 1; j <= i; j++)
       {
           cout<<val<<" ";
           val++;
       }
       cout<<endl;
    }
    return 0;
   }