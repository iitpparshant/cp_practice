#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  while (n--)
  {
    int x,y;
    cin>>x>>y;
    if(y<-1){
      cout<<"NO";
    }
    else{
      cout<<"YES";
    }
    cout<<endl;
  }
  
  return 0;
}