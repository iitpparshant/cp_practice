#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto it:s){
      mp[it]++;
    }
    int count=0;
    for (char i = 'A'; i <= 'G'; i++)
    {
      if(mp[i]<m){
        count+= (m-mp[i]);
      }
    }
    cout<<count<<endl;
  }
  return 0;
}