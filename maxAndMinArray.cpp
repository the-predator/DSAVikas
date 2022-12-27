#include<bits/stdc++.h>
using namespace std;
int main()
     {
        int arr[5],maxNo=INT_MIN, minNo=INT_MAX;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            minNo = min(minNo, arr[i]);
            maxNo = max(maxNo, arr[i]);
        }
         cout<<maxNo<<" "<<minNo;
        return 0;
     }