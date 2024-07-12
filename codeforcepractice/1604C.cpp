#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool ok= true;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin>>x;
      bool f= false;
      for(int j=i+1;j>=2;j--){
        if(x%j){
          f=true;
          break;
        }
      }
      ok&=f;
    }
    if(ok){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    cout<<endl;
  }
  return 0;
}