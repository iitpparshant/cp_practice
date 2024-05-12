#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        vector<int>mp(n,-1);
        vector<int>count(n,0);
        for (int i = 0; i < n; i++)
        {
            if(mp[c[i]-1]==-1){
                mp[c[i]-1]= i%2;
            }
            if(mp[c[i]-1]!=i%2){
                count[c[i]-1]++;
                mp[c[i]-1]= i%2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(mp[i]!=-1){
                count[i]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<count[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}