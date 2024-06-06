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
    int l=1;
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      int y=__gcd(l,a[i]);
      y= a[i]/y;
      l*=y;
    }
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
      sum+=(l/a[i]);
      ans.push_back(l/a[i]);
    }
    if(sum>=l){
      cout<<-1;
    }
    else
    {
      for (int i = 0; i < ans.size(); i++)
      {
        cout<<ans[i]<<" ";
      } 
    }
    cout<<endl;
  }
  return 0;
}