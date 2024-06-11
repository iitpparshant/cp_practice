#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(int n){
  int ans=2;
  int sum=0;
  for(int i=2;i<=n;i++){
    int k= n/i;
    int csum= i*k*(k+1)/2;
    if(csum>sum){
      sum= csum;
      ans=i;
    }
  }
  return ans;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int x= solve(n);
    cout<<x;
    cout<<endl;
  }
  return 0;
}