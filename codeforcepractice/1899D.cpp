#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         int a[n];
         map<int,int>mp;
         long long ans=0;
         for (int  i = 0; i < n; i++)
         {
            cin>>a[i];
            ans+= mp[a[i]];
            if(a[i]==1){
                ans+= mp[2];
            }
            if(a[i]==2){
                ans+= mp[1];
            }
            mp[a[i]]++;
         }
         cout<<ans<<endl;
    }
    return 0;
}