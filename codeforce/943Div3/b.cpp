#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        unordered_map<int,int>mp;
        int i=0,j=0;
        int count=0;
        while(i<n && j<m){
            while(i<n && j<m &&a[i]!=b[j]){
                j++;
            }
            if(a[i]==b[j]){
                i++;
                j++;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}