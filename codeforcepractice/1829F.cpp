#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>>mp;
    unordered_map<int,int>mp1;
    vector<int>x(m),y(m);
    for(int i=0;i<m;i++){
      // int x,y;
      cin>>x[i]>>y[i];
      mp[x[i]].push_back(y[i]);
      mp[y[i]].push_back(x[i]);
      mp1[x[i]]++;
      mp1[y[i]]++;
    }
    int z=0;
    for (int i = 1; i <=n ; i++)
    {
      if(mp1[i]==1){
        z=i;
        break;
      }
    }
    // cout<<z<<"////";
    int p=mp[z][0];
    // cout<<p<<"////";
    int s=(mp[p].size());
    int v=0;
    for(auto it:mp[p]){
      // cout<<it<<" "<<mp[it].size()<<">>>";
      if(mp[it].size()!=1){
        v=it;
      }
    }
    cout<<mp[v].size()<<" ";
    cout<<s-1;
    cout<<endl;
  }
  return 0;
}