#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int x[3];
    for(int i=0;i<3;i++){
      cin>>x[i];
    }
    int m;
    cin>>m;
    sort(x,x+3);
    int a=x[0],b=x[1],c=x[2];
    if(c-(a+b+1)<=m && m<=(a+b+c-3)){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    cout<<endl;
  }
  return 0;
}