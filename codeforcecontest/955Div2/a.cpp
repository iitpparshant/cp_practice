#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){   
  int t;
  cin>>t;
  while(t--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(1LL*(a-b)*(c-d)>0){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    cout<<endl;
  }
  return 0;
}