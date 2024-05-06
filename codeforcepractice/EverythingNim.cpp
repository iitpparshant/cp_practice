#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // long long mx = a[n - 1];
        int x = 0;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            a[i]-=x;
            if (a[i]==1)
            {
                x+=a[i]; 
                count^=1;
            }
            else if(a[i]>1){
                count^=1;
                break;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        if(count){
            cout<<"Alice";
        }
        else{
            cout<<"Bob";
        }
        cout<<endl;
    }
    return 0;
}