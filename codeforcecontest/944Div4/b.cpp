#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.size();
        int flag=0;
        unordered_map<char,int>mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==n){
                flag=1;
            }
        }
        for(int i=0;i<n;i++){
            if(s[0]!=s[i]){
                swap(s[0],s[i]);
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}