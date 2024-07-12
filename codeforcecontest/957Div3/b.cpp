#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(k);
    for (int i = 0; i < k; i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int count=0;
    int count1=0;
    int x=0;
    for (int i = 0; i < k-1; i++)
    {
      if(a[i]==1){
        count1++;
      }
      else{
        x++;
        count+=a[i];
      }
    }
    if(count>0){
      count= 2*(count)-x;
    }
    cout<<count1+count<<endl;
  }
  return 0;
}