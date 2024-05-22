#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        string r="";
        for(auto it:mp){
            r+= it.first;
        }
        sort(r.begin(),r.end());
        unordered_map<char,char>mp1;
        int m= r.size();
        for(int i=0;i<(m+1)/2;i++){
            mp1[r[i]]= r[m-1-i];
            mp1[r[m-1-i]]= r[i];
        }
        string ans="";
        for (int i = 0; i < n; i++)
        {
            ans+=mp1[s[i]];
        }
        // cout<<r<<" ";
        cout<<ans;
        cout<<endl;
    }
    return 0;
}