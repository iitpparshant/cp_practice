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
    vector<long long>mp(n+1,0),mx(n+1,0);
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]<=n){
        mp[a[i]]++;
      }
    }
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j+=i){
        mx[j]+=mp[i];
      }
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
      ans= max(ans,mx[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}