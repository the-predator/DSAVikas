#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
    {
   int a=0, b = 1, temp;
   cout<<a<<" "<<b<<" ";
     for (int i = 1; i < n-1; i++)
     {
        temp = b;
        b = b+a;
        a=temp;
        cout<<b<<" ";
     }
     
    }
int main()
   {
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
   }