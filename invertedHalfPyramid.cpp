#include<bits/stdc++.h>
using namespace std;
int main()
   {
    int row, col;
    cout<<"enter rows and columns";
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
       for (int j = col-i; j > 0; j--)
       {
           cout<<" * ";
       }
       cout<<endl;
    }
    return 0;
   }