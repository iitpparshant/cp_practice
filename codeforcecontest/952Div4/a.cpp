#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s,t;
    cin>>s>>t;
    cout<<t[0];
    for(int i=1;i<3;i++){
      cout<<s[i];
    }
    cout<<" ";
    cout<<s[0];
    for(int i=1;i<3;i++){
      cout<<t[i];
    }
    cout<<endl;
  }
  return 0;
}