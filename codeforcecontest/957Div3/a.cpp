#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    vector<int>a(3);
    for(int i=0;i<3;i++){
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int count=0;
    for(int i=1;i<=5;i++){
      for(int j=0;j<2;j++){
        if(a[j]<=a[j+1]){
          a[j]++;
          break;
        }
      }
      sort(a.begin(),a.end());
    }
    cout<<a[0]*a[1]*a[2]<<endl;
  }
  return 0;
}