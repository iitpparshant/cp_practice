#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int mod= 1000000007;
long long solve(long long x){
  if(x==0){
    return 1;
  }
  long long ans= solve(x/2);
  ans*=ans;
  ans%=mod;
  if(x%2){
    ans*=4;
  }
  return ans%mod;
}
int main(){
  int n;
  cin>>n;
  long long x= (1LL<<n)-2;
  long long ans= solve(x);
  ans*=6;
  ans%=mod;
  cout<<ans<<endl;
  return 0;
}