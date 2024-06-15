#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(x);
    for(int i=0;i<x;i++){
      cin>>a[i];  
      a[i]--;
    }
    set<int> st(a.begin(), a.end());
    int count=x-2;
    for (int i = 0; i < x; i++)
    {
      if(st.count((a[i]+2)%n)&& !st.count((a[i]+1)%n)){
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}