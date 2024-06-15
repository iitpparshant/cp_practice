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
    for(auto &it:a){
      cin>>it;
      int curr=1;
      while(it--){
        curr*=10;
      }
      it=curr;
    }
    k++;
    long long ans=0;
    for (int i = 0; i < n; i++)
    {
      int x=k;
      if(i+1<n){
        x= min(x,a[i+1]/a[i]-1);
      }
      ans+= a[i]*1LL*x;
      k-=x;
    }
    cout<<ans<<endl;
  }
  return 0;
}