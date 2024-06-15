#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    vector<vector<int>>pos(k);
    set<int>s;
    for (int i = 0; i < n; i++)
    {
      s.insert(i);
      pos[a[i]-1].push_back(i);
    }

    vector<int>ans(k,0);
    for(int i=0;i<k;i++){
      if(!pos[i].size()){
        continue;
      }
      ans[i]= 2*(*s.rbegin()-*s.begin()+1);
      for(auto it:pos[i]){
        s.erase(it);
      }
    }
    for (int i = 0; i < k; i++)
    {
      cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}