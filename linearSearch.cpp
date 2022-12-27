#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        cout<<"enter a number";
        cin>>n;
        int arr[n];
        cout<<"enter the elements";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<"enter the key";
        int key;
        cin>>key;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==key)
              {
                cout<<i;
                break;
              }
        }
        return 0;
    }