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
    vector<long long>sum(n+1,0);
    vector<pair<int,int>>mx(n+1);
    sum[0]=0;
    mx[0]={0,0};
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      sum[i+1]= sum[i]+a[i];
      if(a[i]>mx[i].first){
        mx[i+1]= {a[i],i};
      }
      else{
        mx[i+1]= mx[i];
      }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(mx[i+1].first==(sum[i+1]-a[mx[i+1].second])){
        count++;
        // cout<<i<<" ";
      }
    }
    cout<<count<<endl;
  }
  return 0;
}